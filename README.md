# Scientific-Calculator
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Scientific Calculator in C++</title>
<style>
    body {
        font-family: "Segoe UI", Arial, sans-serif;
        background-color: #f8f9fa;
        color: #222;
        line-height: 1.6;
        margin: 40px;
    }
    h1, h2, h3 {
        color: #0078d7;
    }
    code {
        background: #eee;
        padding: 2px 5px;
        border-radius: 4px;
        font-family: "Consolas", monospace;
    }
    pre {
        background: #f4f4f4;
        padding: 10px;
        border-radius: 6px;
        overflow-x: auto;
    }
    .section {
        margin-bottom: 30px;
    }
    hr {
        border: 0;
        height: 1px;
        background: #ccc;
        margin: 30px 0;
    }
</style>
</head>
<body>

<h1>🧮 Scientific Calculator in C++</h1>

<div class="section">
<h2>📌 Overview</h2>
<p>This project is a <strong>Scientific Calculator</strong> built using <strong>C++</strong>, which performs both basic arithmetic and advanced mathematical operations. It runs in the terminal and provides a clean, menu-based interface.</p>
</div>

<hr>

<div class="section">
<h2>⚙️ Features</h2>

<h3>Basic Operations</h3>
<ul>
  <li>Addition</li>
  <li>Subtraction</li>
  <li>Multiplication</li>
  <li>Division</li>
  <li>Modulus</li>
</ul>

<h3>Power & Roots</h3>
<ul>
  <li>Square</li>
  <li>Square Root</li>
  <li>Cube</li>
  <li>Cube Root</li>
  <li>Power (xⁿ)</li>
</ul>

<h3>Trigonometric Functions</h3>
<ul>
  <li>Sine, Cosine, Tangent</li>
  <li>Cosecant, Secant, Cotangent</li>
  <li>Inverse (asin, acos, atan)</li>
</ul>

<h3>Hyperbolic Functions</h3>
<ul>
  <li>sinh, cosh, tanh</li>
</ul>

<h3>Logarithmic Functions</h3>
<ul>
  <li>Natural Log (base e)</li>
  <li>Log base 10</li>
  <li>Custom base log</li>
</ul>

<h3>Other Functions</h3>
<ul>
  <li>Hypotenuse calculation</li>
  <li>Exponential (e<sup>x</sup>)</li>
  <li>Factorial (n!)</li>
  <li>Permutation (nPr)</li>
  <li>Combination (nCr)</li>
</ul>
</div>

<hr>

<div class="section">
<h2>🖥️ How It Works</h2>
<ol>
  <li>The program starts by showing a menu of 30+ operations.</li>
  <li>The user enters a choice (1–30).</li>
  <li>The calculator performs the selected operation and shows the result.</li>
  <li>Enter <code>31</code> to show the menu again or <code>0</code> to exit.</li>
</ol>
</div>

<hr>

<div class="section">
<h2>🧩 Code Highlights</h2>
<ul>
  <li>Uses <code>&lt;cmath&gt;</code> for mathematical functions.</li>
  <li>Includes a custom <code>factorial()</code> function.</li>
  <li>Organized with a clean <code>switch-case</code> structure.</li>
  <li>Error handling for invalid inputs (e.g., division by zero).</li>
  <li>Uses a constant <code>PI</code> for trigonometric accuracy.</li>
</ul>
</div>

<hr>

<div class="section">
<h2>🚀 How to Run</h2>
<h3>Using g++ or any C++ compiler:</h3>
<pre><code>g++ scientific_calculator.cpp -o calculator
./calculator
</code></pre>

<h3>Using Turbo C++:</h3>
<ol>
  <li>Open the file in Turbo C++.</li>
  <li>Press <strong>Ctrl + F9</strong> to compile and run.</li>
</ol>
</div>

<hr>

<div class="section">
<h2>📚 Example Output</h2>
<pre>
======================== Scientific Calculator ========================
 1.Addition        2.Subtraction      3.Multiplication   4.Division
 5.Square          6.Square Root      7.Cube             8.Cube Root
 9.Power           10.Modulus         11.Sine            12.Cosine
13.Tangent         14.Cosecant        15.Secant          16.Cotangent
17.Inverse Sine    18.Inverse Cos     19.Inverse Tan     20.Hyperbolic Sine
21.Hyperbolic Cos  22.Hyperbolic Tan  23.Natural Log     24.Base-10 Log
25.Log Base-n(x)   26.Hypotenuse      27.Exponential     28.Factorial
29.Permutation     30.Combination
==========================================================================

Enter choice (0–30): 6
Enter number for Square Root = 25
Square Root = 5
</pre>
</div>

<hr>

<div class="section">
<h2>🧠 Future Improvements</h2>
<ul>
  <li>Add support for complex numbers</li>
  <li>Include memory functions (M+, M-, MR)</li>
  <li>Create a GUI using Qt or Python Tkinter</li>
  <li>Show history of calculations</li>
</ul>
</div>

<hr>

<div class="section">
<h2>👨‍💻 Author</h2>
<p><strong>Ritu Raaz</strong><br>
Student | AI & ML | C++ Developer<br>
📍 India</p>
</div>

</body>
</html>
