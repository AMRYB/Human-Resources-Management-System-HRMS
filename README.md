## 📌 Overview
The **Human Resources Management System (HRMS)** is a secure, role-based application built in **C** to streamline HR operations in a simulated file system environment. It supports core HR functionalities like payroll, performance evaluation, and employee self-service by managing files, directories, and permissions securely.

---

## ⚙️ Features

### 🔐 Role-Based Access
- **HR Manager**: Full administrative access (create, modify, delete, permission control, symbolic links).
- **Team Leads**: Can view and update team performance reports.
- **Employees**: Can access personal records such as salary slips and leave status.

### 📁 File & Directory Management
- Create, delete, and rename files and directories.
- View file contents using `cat`, `head`, `tail`.
- Change file and directory permissions.
- Create symbolic links to essential documents.
- Search recursively for files/directories.
- Use command aliases for quick access.

---

## 🗂️ Directory Structure

```bash
/hrms
  ├── /hr_manager          # Administrative files
  │   ├── payroll.txt
  │   ├── recruitment_logs.txt
  ├── /team_leads          # Performance tracking
  │   └── performance_reports.txt
  ├── /employees           # Personal employee records
      ├── salary_slips.txt
      ├── leave_status.txt
```
---

## 👤 User Roles & Functionalities

### 1. HR Manager

* Register/login with secure credentials.
* Manage payroll, recruitment logs.
* Control permissions on all files/directories.
* Create symbolic links.
* Search system-wide for files.
* View and manage all data.

### 2. Team Leads

* Access and update performance reports.
* View/search performance files within their scope.

### 3. Employees

* Access salary slips and leave status.
* Update leave status only.
* Search within their personal files.

---

## 🧱 Functional Modules

| Module                     | Description                                      |
| -------------------------- | ------------------------------------------------ |
| `initialize_structure()`   | Sets up directory structure for all roles.       |
| `register_user()`          | Registers users and stores credentials securely. |
| `authenticate_user()`      | Validates login credentials.                     |
| `list_files()`             | Lists contents of a directory.                   |
| `create_file()`            | Creates a file in the user’s scope.              |
| `delete_file()`            | Removes selected file.                           |
| `change_permissions()`     | Alters permissions for files/directories.        |
| `create_symbolic_link()`   | Links critical files (e.g., policies).           |
| `find_file_or_directory()` | Recursively searches for names or keywords.      |

---

## 🖥️ Sample Usage Scenarios

### 🧾 Employee Updates Leave

1. Logs in as employee.
2. Opens `leave_status.txt`.
3. Adds new leave info using update function.

### 📂 HR Manager Adds Policy

1. Logs in as HR Manager.
2. Creates a new `.txt` policy file in `/hr_manager`.
3. Changes permissions to restrict access.

### 📈 Team Lead Updates Report

1. Logs in as Team Lead.
2. Opens `performance_reports.txt`.
3. Adds team metrics.

---

## 🛡️ Security Measures

* 🔐 **Authentication**: Role-specific login with secure credential checks.
* 🛑 **Permission Management**: Users can only access allowed directories.
* 📁 **Directory Isolation**: Ensures private data remains separate.

---

## 🧭 Navigation Menus

Each user sees a specific menu upon login:

* `hr_manager_menu(username)`
* `team_lead_menu(username)`
* `employee_menu(username)`

These functions control available operations dynamically.

---

## 🚀 Future Enhancements

* ⚡ Implement execution of command aliases.
* 🔒 Encrypt credential storage for security.
* 🌐 Add GUI or web interface for usability.

---
## 👨‍💻 Project Team

* **Project Leader:** Amr Yasser
* **Assistants:**

  * Youssef Mahmoud
  * Mohamed Waleed
  * Sama El-Fishawy
  * Youssef El-Sayed
  * Mohamed Hareth
  * Mariam Mohamed
