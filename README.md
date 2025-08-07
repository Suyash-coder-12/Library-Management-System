# 📚 Library Management System (C++ with Qt GUI)

A GUI-based **Library Management System** built using **C++ and Qt**. This project is designed for final-year Computer Science students and includes features like book and member management, issue/return tracking, secure login, and file-based storage — all with a clean graphical interface.

---

## 🚀 Features

- 🔐 Login system with SHA-256 password hashing
- 📖 Book management: Add, view, edit, delete
- 👥 Member management: Register, update, delete
- 🔄 Issue and return functionality with due dates
- 💾 File-based data storage (`.dat` files)
- 🧠 Search filters for books and members
- 🖼️ GUI interface using Qt Framework
- 📄 Modular code structure and CMake support
- 📚 Ready for GitHub with license, README, and Doxygen docs

---

## 🛠️ Technologies Used

- **C++17**
- **Qt 6 / Qt Creator**
- **QWidgets** for GUI
- **File I/O** for persistent storage
- **SHA-256** hashing (via `QCryptographicHash`)
- **CMake** for build automation

---

## 🧩 Project Structure

```plaintext
LibraryManagementSystem/
├── src/
│   ├── main.cpp
│   ├── login.cpp
│   ├── book.cpp
│   └── ...
├── include/
│   ├── login.h
│   ├── book.h
│   └── ...
├── ui/
│   ├── login.ui
│   ├── dashboard.ui
│   └── ...
├── data/
│   ├── users.dat
│   ├── books.dat
│   └── ...
├── CMakeLists.txt
├── README.md
├── LICENSE
└── .gitignore
