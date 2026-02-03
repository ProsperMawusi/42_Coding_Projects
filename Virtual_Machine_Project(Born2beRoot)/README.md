# Born2BeRoot 🐧

![License](https://img.shields.io/badge/license-MIT-green)
![Platform](https://img.shields.io/badge/platform-Debian-blue)
![Status](https://img.shields.io/badge/status-completed-brightgreen)

**A comprehensive Linux system administration and security lab built as part of the 42 curriculum.**  
Gain hands-on experience with disk partitioning, LVM, encryption, user management, firewalls, SSH, and web server deployment (WordPress).  
Focuses on **security**, **stability**, and **real-world server administration practices**.

---

## 📁 Repository Structure

- `scripts/` – Automation and monitoring scripts  
- `exercises/` – Individual lab exercises with instructions  
- `docs/` – Network diagrams, notes, and comparisons  
- `tests/` – Scripts to verify configuration and setup  

---

## 📝 TL;DR

- **OS:** Debian  
- **Partitioning:** LVM with encryption, separate logical volumes for `/home`, `/var`, `/var/log`, `/tmp`, `/srv`  
- **Security:** SSH hardening, UFW firewall, strong PAM password policy, sudo restrictions, AppArmor  
- **Services:** SSH, SUDO, UFW, Cron, Lighttpd, MariaDB, PHP, WordPress (bonus)  
- **Virtualization:** VirtualBox, server-only installation, no GUI  

---

## 🔹 Description

Born2BeRoot is an in-depth introduction to **Linux system administration, virtualization, and system security**.  
It provides hands-on experience installing and configuring a Linux OS, managing users, groups, and permissions, securing services, and deploying a small web environment.

<details>
<summary>📌 Full Project Description</summary>

The project covers:

- Disk partitioning and Logical Volume Management (LVM)  
- Encrypted logical volumes to protect sensitive data  
- User and group management, SUDO configuration  
- SSH configuration and hardening  
- Firewall setup (UFW) and network security  
- Cron-based system monitoring scripts  
- Bonus: WordPress deployment using Lighttpd, MariaDB, and PHP

</details>

---

## 🔐 Security Highlights

| Feature                       | Implementation |
| ------------------------------| -------------- |
| Disk Encryption               | LVM with LUKS |
| Firewall                      | UFW           |
| SSH Hardening                  | Custom port, root login disabled |
| Password Policy                | PAM-enforced strong passwords |
| Sudo Management                | Restricted, logged |
| AppArmor                       | Path-based access control |

---

## 💻 Choice of Operating System: Debian

Debian was chosen because it is **stable, lightweight, and widely used in server environments**. Its strong package management and documentation make it ideal for learning system administration.

### Debian vs Rocky Linux

| Debian                             | Rocky Linux                        |
| ---------------------------------- | ---------------------------------- |
| Community-driven distribution      | Enterprise-oriented distribution   |
| Very stable, slower release cycle  | Closely follows RHEL releases      |
| Uses `apt` package manager         | Uses `dnf` package manager         |
| Lightweight and minimal by default | More enterprise defaults enabled   |
| Easier for beginners               | More complex initial configuration |

---

## 🖥 Virtual Machine & OS Configuration

- VirtualBox with server-only installation, no GUI  
- LVM for flexible disk management  
- Disk encryption with unencrypted `/boot`  
- Logical volumes for `/`, `swap`, `/home`, `/var`, `/var/log`, `/tmp`, `/srv`  

<details>
<summary>📌 Partitioning & LVM Details</summary>

- **/dev/sda1** → `/boot` (476 MB, unencrypted)  
- **/dev/sda5** → `sda5_crypt` (29.5 GB encrypted container)  
- Inside `LVMGroup`:  
  - `root` → 9.3 GB, `/`  
  - `swap` → 2.1 GB  
  - `home` → 4.7 GB  
  - `var` → 2.8 GB  
  - `var-log` → 3.7 GB  
  - `tmp` → 2.8 GB  
  - `srv` → 2.8 GB  

Benefits:

- Isolated partitions for stability and security  
- Encryption protects sensitive data  
- Easy maintenance and resizing via LVM  

</details>

---

## 👥 User & Privilege Management

- Non-root user created for administrative tasks using `sudo`  
- Groups used to manage access efficiently  
- Sudo restricted and logged  
- Strong PAM password policy enforced

---

## 🛡 Firewall & Network Security

- UFW configured with only necessary ports allowed  
- SSH hardened (custom port, root login disabled)  

### UFW vs firewalld

| UFW                      | firewalld                   |
| ------------------------ | --------------------------- |
| Simple and user-friendly | More advanced and dynamic   |
| Rule-based configuration | Zone-based configuration    |
| Ideal for small servers  | Better for complex networks |
| Default on Debian        | Default on Rocky Linux      |

**Conclusion:** UFW was chosen for simplicity and suitability to the project scope.

---

## 🖥 Virtualization Platform

- **Oracle VirtualBox** selected for cross-platform support and strong community  
- Server-only installation, no GUI, reduces attack surface  

### VirtualBox vs UTM

| VirtualBox                             | UTM                          |
| -------------------------------------- | ---------------------------- |
| Cross-platform (Windows, Linux, macOS) | macOS only                   |
| Supports BIOS/UEFI                     | Uses Apple’s Hypervisor      |
| Widely used in 42 projects             | Mainly used on Apple Silicon |
| Extensive documentation                | Limited Linux support        |

---

## 🛠 Services Installed

**Mandatory services:** SSH, SUDO, UFW, Cron  
**Bonus services:** Lighttpd, MariaDB, PHP, WordPress  

All services configured with security best practices and enabled at startup.

---

## 📝 Monitoring Script

- Cron-based system monitoring  
- Reports: CPU/RAM usage, disk usage, LVM status, active connections, logged-in users, sudo commands executed  
- Uses `wall` to notify all logged-in users

---

## 🌐 BONUS PART: Web Stack Deployment

<details>
<summary>Click to expand Bonus Details</summary>

- **Lighttpd** → lightweight web server  
- **MariaDB** → database server for WordPress  
- **PHP** → dynamic content processing  
- **WordPress** → CMS installed and secured with a dedicated database user  

**Bonus Security Measures:**  
- Additional firewall rules for web access  
- Service isolation, minimal privileges  

</details>

---

## ⚡ How to Run / Test

1. Clone the repository:
git clone https://github.com/username/born2beroot.git
cd born2beroot
---
## 📚 Resources

### 🔹 System Administration & Linux
- [Sudo Command in Linux](https://www.geeksforgeeks.org/linux-unix/sudo-command-in-linux-with-examples/) – Overview of `sudo`, usage, and security considerations.  
- [Setting Up a Debian VM](https://cs4118.github.io/dev-guides/debian-vm-setup.html) – Step-by-step guide for installing and configuring Debian in VirtualBox.  
- [LVM (Logical Volume Manager)](https://askubuntu.com/questions/3596/what-is-lvm-and-what-is-it-used-for) – Explanation of LVM concepts and usage.  

### 🔹 Security & Hardening
- [UFW Firewall Essentials](https://www.digitalocean.com/community/tutorials/ufw-essentials-common-firewall-rules-and-commands) – Guide to configuring and managing UFW on Debian.  
- [AppArmor Documentation](https://documentation.ubuntu.com/server/how-to/security/apparmor/) – Path-based access control for Linux.  

### 🔹 Web Services
- [Lighttpd Web Server](https://en.wikipedia.org/wiki/Lighttpd) – Lightweight web server for small Linux servers.  
- [MariaDB Database](https://wiki.archlinux.org/title/MariaDB) – Open-source database management system.  
- [PHP Introduction](https://www.w3schools.com/php/php_intro.asp) – Basics of PHP for dynamic content.  
