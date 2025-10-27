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
