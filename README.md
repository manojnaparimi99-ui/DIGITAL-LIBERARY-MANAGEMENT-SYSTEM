# DIGITAL-LIBERARY-MANAGEMENT-SYSTEM


---

## 📌 Project Title

**CRUD Operations Using Linked List in C**



---

team members
1.varshini
2.manojna

## ❓ Problem Statement

Design and implement a program in C that performs **CRUD operations (Create, Read, Update, Delete)** on a collection of records.
Each record contains an **ID and a Name**, and the system should allow users to manage records dynamically using a menu-driven interface.

---

## 🌍 Real-world Application

This project simulates real-world systems like:

* Student record management system
* Employee database system
* Contact management apps
* Library user records

It demonstrates how data can be **stored, modified, and deleted dynamically**, similar to database systems.

---

## 🧱 Data Structure Used

**Singly Linked List**

### Why Linked List?

* Dynamic memory allocation (no fixed size like arrays)
* Efficient insertion and deletion
* Flexible data handling

Each node contains:

* `id` → Unique identifier
* `name` → Person name
* `next` → Pointer to next node

---

## 🏗️ System Design

### Components:

1. **Node Structure**
2. **Head Pointer**
3. **Functions:**

   * `create()` → Insert new record
   * `read()` → Display all records
   * `update()` → Modify record
   * `deleteNode()` → Remove record
4. **Main Menu Loop**

### Flow:

```
User Input → Menu → Function Call → Linked List Operation → Output
```

---

## 🧠 Algorithm

### 1. CREATE

1. Allocate memory for new node
2. Read ID and Name
3. Insert node at beginning
4. Update head pointer

---

### 2. READ

1. Start from head
2. Traverse list
3. Print each node

---

### 3. UPDATE

1. Input ID
2. Traverse list
3. If ID matches → update name
4. Else → show "not found"

---

### 4. DELETE

1. Input ID
2. Check if head node matches
3. Else traverse list
4. Adjust pointers
5. Free memory

---

## 💻 Implementation

* Language: **C**
* Concepts used:

  * Structures
  * Pointers
  * Dynamic Memory (`malloc`, `free`)
  * String handling (`strcpy`)
  * Menu-driven programming

---

## ▶️ Demo Output

```
--- CRUD MENU ---
1. Create
2. Read
3. Update
4. Delete
5. Exit

Enter your choice: 1
Enter ID: 1
Enter Name: Alice
Record added successfully!

Enter your choice: 1
Enter ID: 2
Enter Name: Bob
Record added successfully!

Enter your choice: 2

--- Records ---
ID: 2, Name: Bob
ID: 1, Name: Alice

Enter your choice: 3
Enter ID to update: 2
Enter new name: Bobby
Record updated successfully!

Enter your choice: 2

--- Records ---
ID: 2, Name: Bobby
ID: 1, Name: Alice

Enter your choice: 4
Enter ID to delete: 1
Record deleted successfully!

Enter your choice: 2

--- Records ---
ID: 2, Name: Bobby

Enter your choice: 5
Exiting program...
```

---

## 🧾 Conclusion

This project successfully demonstrates how **CRUD operations** can be implemented using a **linked list in C**. It highlights:

* Efficient memory usage
* Dynamic data handling
* Core understanding of pointers and data structures

It serves as a foundation for more advanced systems like:

* Database management systems
* File handling applications
* Full-stack backend logic

---

If you want, I can also format this into a **PDF report** or **PowerPoint slides for presentation** 👍
