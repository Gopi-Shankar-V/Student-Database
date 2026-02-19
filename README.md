# 🎓 Student Database Management System

A **C-language mini project** that implements a fully functional Student Database Management System using **linked lists** and **file handling**. The system allows users to manage student records through a menu-driven console interface.

---

## 📁 Project Structure

```
Student-Database/
│
├── main.c                    # Entry point – main menu and program flow
├── header.h                  # Shared header file – struct definitions & function declarations
│
├── add_new_record.c          # Add a new student record
├── show_the_list.c           # Display all student records
├── count.c                   # Count total number of records
│
├── search_name.c             # Search student by name
├── search_rollno.c           # Search student by roll number
├── search_percentage.c       # Search student by percentage
│
├── delete_record_name.c      # Delete a record by student name
├── delete_record_rollno.c    # Delete a record by roll number
├── delete_all.c              # Delete all records
│
├── sorting.c                 # Sorting menu handler
├── name_sorting.c            # Sort records alphabetically by name
├── rollno_sorting.c          # Sort records by roll number
├── percentage_sorting.c      # Sort records by percentage
├── reverse_list.c            # Reverse the current list order
│
├── save.c                    # Save records to file
├── read_data_file.c          # Load records from file on startup
├── print_slow.c              # Animated text printing utility
│
├── student.dat               # Persistent data file for student records
├── makefile                  # Build automation
└── exe                       # Compiled executable (Linux)
```

---

## ✨ Features

- **Add Records** – Input student name, roll number, and percentage
- **Display Records** – View all stored student records in a formatted list
- **Search** – Find students by name, roll number, or percentage
- **Delete** – Remove individual records (by name or roll number) or clear all records
- **Sort** – Organize records by name, roll number, or percentage
- **Reverse** – Reverse the order of the current list
- **Persistent Storage** – Records are saved to and loaded from `student.dat` automatically
- **Count** – Display the total number of student records

---

## 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| **C Language** | Core programming language |
| **Linked List** | Dynamic data structure for record management |
| **File I/O** | Persistent storage via `student.dat` |
| **Makefile** | Build automation |

---

## 🚀 Getting Started

### Prerequisites

- GCC compiler (or any C compiler)
- Linux / Unix environment (recommended)
- `make` utility

### Build & Run

**Using Makefile:**
```bash
make
./exe
```

**Manual Compilation:**
```bash
gcc main.c add_new_record.c show_the_list.c count.c \
    search_name.c search_rollno.c search_percentage.c \
    delete_record_name.c delete_record_rollno.c delete_all.c \
    sorting.c name_sorting.c rollno_sorting.c percentage_sorting.c \
    reverse_list.c save.c read_data_file.c print_slow.c \
    -o student_db

./student_db
```

---

## 📋 Menu Options

Once the program starts, you will be presented with a menu like this:

```
========================================
     STUDENT DATABASE MANAGEMENT
========================================
 1. Add New Record
 2. Show All Records
 3. Search Record
 4. Delete Record
 5. Sort Records
 6. Reverse List
 7. Count Records
 8. Save & Exit
========================================
```

---

## 💾 Data Persistence

Student records are stored in **`student.dat`**, a binary/text data file. The program automatically:
- **Loads** existing records from `student.dat` at startup (`read_data_file.c`)
- **Saves** all records back to `student.dat` on exit (`save.c`)

This ensures your data is preserved between sessions.

---

## 🗂️ Data Structure

Each student record stores the following fields (defined in `header.h`):

```c
struct Student {
    char name[50];        // Student's full name
    int rollno;           // Roll number
    float percentage;     // Academic percentage
    struct Student *next; // Pointer to next node (linked list)
};
```

---

## 👤 Author

**Gopi Shankar V**  
GitHub: [@Gopi-Shankar-V](https://github.com/Gopi-Shankar-V)

---

## 📄 License

This project is open source and available for educational purposes.
