
---

### **2️⃣ firewall_rules.md**

```markdown
# Firewall Configuration

The firewall is managed using UFW (Uncomplicated Firewall).

## Policy

- Default incoming: DENY  
- Default outgoing: ALLOW  
- Allowed ports:
  - SSH: custom port (default 2222)
  - HTTP: 80 (for WordPress)
  - HTTPS: 443 (for WordPress)
