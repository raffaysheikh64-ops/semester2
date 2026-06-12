# Fundamentals of Procedural Programming in C++

Welcome to my Procedural Programming repository! This collection documents my foundational journey in computer science, focusing on low-level logic, procedural design, and algorithmic problem-solving before transitioning into Object-Oriented Programming (OOP).

Each program in this repository isolates and solves specific mathematical, structural, or logical challenges using standard structured programming practices.

---

## 📂 Repository Structure & Key Concepts

The source files in this repository demonstrate core programming constructs, memory handling, and control flows:

### 1. Control Structures & Conditional Logic
* **Concepts:** Sequential execution, conditional branching (`if-else`, `switch-case`), and iteration loops (`for`, `while`, `do-while`).
* **Focus Area:** Building clean conditional flows, handling user menus, preventing infinite logical lockups, and mastering loop boundaries.

### 2. Functional Decomposition & Reusability
* **Concepts:** Function prototypes, pass-by-value vs. pass-by-reference, scope of variables, and modular code separation.
* **Focus Area:** Breaking down complex monolithic code into small, highly cohesive functions to ensure readability and follow the **Don't Repeat Yourself (DRY)** principle.

### 3. Data Structures & Memory Blocks
* **Concepts:** 1D and 2D arrays, string manipulation, and sequential data processing.
* **Focus Area:** Managing indices safely, searching/sorting through elements, and processing data grids efficiently.

---

## 🛠️ Practical Technical Overcomes

While building these foundational scripts, this repository also serves as a history of tracking down and mastering real-world console pitfalls:

* **Terminal Buffer Management:** Learning how to handle the C++ input pipeline effectively. Mastering the usage of `cin.ignore()` to flush trailing newline (`\n`) characters left behind by basic extraction operators (`cin >>`) before calling text-capturing operations like `getline()`.
* **Algorithmic Debugging:** Developing strong troubleshooting skills by manually dry-running execution flows, fixing semantic off-by-one errors in loops, and tracking variable states inside the console terminal.

---

## 💻 Compilation & Local Execution

All programs are written in standard, modern C++. You can compile and run any individual `.cpp` file using a standard C++ compiler like `g++`.

```bash
# 1. Compile a specific procedural source file
g++ main.cpp -o app_executable

# 2. Run the compiled executable console application
./app_executable
