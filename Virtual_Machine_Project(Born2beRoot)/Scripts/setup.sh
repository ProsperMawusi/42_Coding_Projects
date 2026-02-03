#!/bin/bash
# ==========================================================
# setup.sh - Automates initial setup for Born2BeRoot project
# Author: Prosper Mawusi
# Description: Updates system, installs packages, sets up
#              users, firewall, SSH hardening, monitoring,
#              and optional WordPress stack.
# ==========================================================

# Exit script if any command fails
set -e

# -----------------------------
# 1. Update & Upgrade System
# -----------------------------
echo "[*] Updating system packages..."
sudo apt update -y
sudo apt upgrade -y

# -----------------------------
# 2. Install Required Packages
# -----------------------------
echo "[*] Installing essential packages..."
sudo apt install -y ufw vim htop curl wget net-tools cron sudo lvm2 cryptsetup

# Optional for bonus WordPress part
sudo apt install -y lighttpd mariadb-server php php-mysql php-cgi php-cli unzip

# -----------------------------
# 3. Create Non-Root User
# -----------------------------
# Replace 'myuser' and 'StrongPassword' with your preferred username/password
USERNAME="myuser"
PASSWORD="StrongPassword"

if ! id "$USERNAME" &>/dev/null; then
    echo "[*] Creating non-root user: $USERNAME"
    sudo useradd -m -G sudo "$USERNAME"
    echo "$USERNAME:$PASSWORD" | sudo chpasswd
    sudo mkdir -p /home/$USERNAME/.ssh
    echo "[*] User $USERNAME created and added to sudo group."
else
    echo "[*] User $USERNAME already exists, skipping creation."
fi

# -----------------------------
# 4. SSH Hardening
# -----------------------------
echo "[*] Configuring SSH..."
SSH_PORT=2222   # Change default SSH port
sudo sed -i "s/#Port 22/Port $SSH_PORT/" /etc/ssh/sshd_config
sudo sed -i "s/PermitRootLogin yes/PermitRootLogin no/" /etc/ssh/sshd_config
sudo systemctl restart ssh
echo "[*] SSH hardened (port $SSH_PORT, root login disabled)."

# -----------------------------
# 5. Configure Firewall (UFW)
# -----------------------------
echo "[*] Configuring UFW firewall..."
sudo ufw default deny incoming
sudo ufw default allow outgoing
sudo ufw allow $SSH_PORT/tcp
sudo ufw allow 80/tcp   # HTTP for WordPress (optional)
sudo ufw allow 443/tcp  # HTTPS for WordPress (optional)
sudo ufw --force enable
echo "[*] UFW configured and enabled."

# -----------------------------
# 6. Deploy Monitoring Script
# -----------------------------
MONITOR_SCRIPT="/usr/local/bin/monitoring.sh"
if [ -f "./monitoring.sh" ]; then
    echo "[*] Deploying monitoring script..."
    sudo cp ./monitoring.sh $MONITOR_SCRIPT
    sudo chmod +x $MONITOR_SCRIPT
    # Add to crontab if not already present
    (crontab -l 2>/dev/null | grep -v "$MONITOR_SCRIPT"; echo "*/10 * * * * $MONITOR_SCRIPT") | crontab -
    echo "[*] Monitoring script deployed and scheduled via cron."
else
    echo "[!] monitoring.sh not found in current directory. Skipping."
fi

# -----------------------------
# 7. Optional: WordPress Setup (Bonus)
# -----------------------------
read -p "Do you want to install WordPress stack? (y/N): " wpinstall
if [[ "$wpinstall" =~ ^[Yy]$ ]]; then
    echo "[*] Setting up WordPress stack..."
    
    # Start services
    sudo systemctl enable lighttpd
    sudo systemctl start lighttpd
    sudo systemctl enable mariadb
    sudo systemctl start mariadb

    # Secure MariaDB (basic)
    sudo mysql_secure_installation

    # Create WordPress database and user
    read -p "Enter WordPress DB name: " wpdb
    read -p "Enter WordPress DB user: " wpuser
    read -s -p "Enter WordPress DB password: " wppass
    echo
    sudo mysql -e "CREATE DATABASE ${wpdb};"
    sudo mysql -e "CREATE USER '${wpuser}'@'localhost' IDENTIFIED BY '${wppass}';"
    sudo mysql -e "GRANT ALL PRIVILEGES ON ${wpdb}.* TO '${wpuser}'@'localhost';"
    sudo mysql -e "FLUSH PRIVILEGES;"

    echo "[*] WordPress database and user created."
    echo "Download WordPress manually and place it in /var/www/html."
else
    echo "[*] Skipping WordPress setup."
fi

echo "[*] Setup completed successfully!"
