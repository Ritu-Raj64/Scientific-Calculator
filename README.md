# 🧮 Scientific Calculator in C++

## 📌 Overview
This project is a **Scientific Calculator** built using **C++**, which performs both basic arithmetic and advanced mathematical operations. It runs in the terminal and gives users a clean, menu-based interface to perform calculations easily.

---

## ⚙️ Features

### **Basic Operations**
- Addition  
- Subtraction  
- Multiplication  
- Division  
- Modulus  

### **Power & Roots**
- Square  
- Square Root  
- Cube  
- Cube Root  
- Power (xⁿ)

### **Trigonometric Functions**
- Sine, Cosine, Tangent  
- Cosecant, Secant, Cotangent  
- Inverse (asin, acos, atan)

### **Hyperbolic Functions**
- sinh, cosh, tanh  

### **Logarithmic Functions**
- Natural Log (base e)  
- Log base 10  
- Log with custom base  

### **Other Mathematical Functions**
- Hypotenuse calculation  
- Exponential (eˣ)  
- Factorial (n!)  
- Permutation (nPr)  
- Combination (nCr)

---

## 🖥️ How It Works
1. The program starts by displaying a **menu** of 30+ mathematical operations.  
2. The user selects an option by entering its number (1–30).  
3. The calculator performs the requested operation and displays the result.  
4. You can type `31` to show the menu again or `0` to exit the program.

---

## 🧩 Code Highlights
- Uses `<cmath>` for all math functions.  
- Includes a **factorial()** function using loops.  
- Well-structured **switch-case** for each operation.  
- Error handling for invalid operations like division by zero or invalid input.  
- Constants defined for **PI** for accurate trigonometric calculations.

---

## 🚀 How to Run

### **Using any C++ compiler (e.g., g++, Turbo C++, Code::Blocks, Visual Studio Code):**
```bash
g++ scientific_calculator.cpp -o calculator
./calculator
**💡 Example Output**
======================== Scientific Calculator ========================

 1.Addition        2.Subtraction      3.Multiplication   4.Division
 5.Square          6.Square Root      7.Cube             8.Cube Root
 9.Power           10.Modulus         11.Sine            12.Cosine
13.Tangent         14.Cosecant        15.Secant          16.Cotangent

17.Inverse Sine    18.Inverse Cos     19.Inverse Tan     20.Hyperbolic Sine
21.Hyperbolic Cos  22.Hyperbolic Tan  23.Natural Log     24.Base-10 Log
25.Log Base-n(x)   26.Hypotenuse      27.Exponential     28.Factorial
29.Permutation     30.Combination

======================================================================
31.Show Menu Again       0.Exit
======================================================================

Enter choice (0-30): 1
Enter numbers (enter 0 to stop): 5 10 15 0
Addition = 30
------------------------------------------------------------------------
```
## **🧑‍💻 Author**

**Name:** Ritu Raaz  
**Course:** B.Sc (AI & ML)  
**Language:** C++  
**IDE:** Visual Studio  
**Focus Area:** Object-Oriented & Scientific Computing  

---

## 🚀 Future Improvements

- GUI version using **Qt** or **Tkinter**  
- Add support for **complex numbers**  
- Include **history and memory** functions  
- Export calculation **logs to a file**  

---

## 🪪 License

This project is **open-source** and free to use for educational or personal projects.  
Attribution is appreciated but not required.  

---

