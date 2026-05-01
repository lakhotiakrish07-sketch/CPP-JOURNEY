

## 🚀 Topic

Virtual Functions & Runtime Polymorphism in C++

## 📌 Description

This project implements a Smart Employee Management System using virtual functions. It demonstrates how different types of employees can be handled using a single base class pointer and how function calls are resolved at runtime.

## 🧠 Concepts Used

* Classes & Objects  
* Inheritance  
* Virtual Functions  
* Function Overriding  
* Runtime Polymorphism  
* Dynamic Memory Allocation  

## 💻 Implementation

### 1. Employee Base Class
* Stores common data like name and id  
* Declares virtual functions `setdata()` and `display()`  

### 2. FullTime Employee
* Stores salary and bonus  
* Calculates total salary  

### 3. PartTime Employee
* Stores salary and bonus  
* Calculates total salary  

### 4. Freelancer
* Stores hours and rate  
* Calculates payment based on work  

### 5. Dynamic Object Handling
* Uses `Employee**` to store multiple employee objects  
* Creates objects at runtime using `new`  

### 6. Polymorphism
* Calls same functions (`setdata`, `display`) using base pointer  
* Output depends on actual object type  

## 📷 Output

Displays employee details and calculated salary based on employee type.

## 📈 Progress

Built a complete project using virtual functions and polymorphism.

## 🔥 Learning Outcome

Understood how runtime polymorphism works and how base class pointers can control different derived class behaviors in real-world scenarios.