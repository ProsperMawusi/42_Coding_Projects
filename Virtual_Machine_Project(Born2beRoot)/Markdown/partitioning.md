# Partitioning & LVM Setup

This document describes the disk partitioning, encryption, and LVM configuration used in the Born2BeRoot project.

## Disk Layout

- **Disk:** /dev/sda (30 GB)
- **/boot:** 476 MB, unencrypted
- **Encrypted LVM:** 29.5 GB
  - LVMGroup-root → 9.3 GB → `/`
  - LVMGroup-swap → 2.1 GB → `[SWAP]`
  - LVMGroup-home → 4.7 GB → `/home`
  - LVMGroup-var → 2.8 GB → `/var`
  - LVMGroup-var-log → 3.7 GB → `/var/log`
  - LVMGroup-tmp → 2.8 GB → `/tmp`
  - LVMGroup-srv → 2.8 GB → `/srv`

**Rationale:**  
- Separate partitions improve security and stability.  
- LVM allows resizing and flexibility for future expansion.  
- Encryption protects sensitive data.
