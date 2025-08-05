# Factorial

This simple C++ program calculates the **factorial** of a number entered by the user using a **recursive function**.

## 📌 Description

The program asks the user to input an integer `n`, then calculates and prints `n!` (factorial of n).  
Factorial is calculated using recursion: n! = n × (n−1) × (n−2) × ... × 1

---

## ⚙️ How It Works

- The function `factorial(int n)` recursively multiplies `n` by `factorial(n - 1)` until it reaches the base case `n <= 1`.
<img width="2042" height="1266" alt="factorial" src="https://github.com/user-attachments/assets/6bd093af-334b-48ca-958f-606dec92a181" />


## 🖨️ Example Output

Value: **5**  
120 

---

# Fibonacci

This simple C++ program calculates the **fibonacci** of a number entered by the user using a **recursive function**.

## 📌 Description

The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones:  
f(0) = 0  
f(1) = 1  
f(n) = f(n - 1) + f(n - 2)  
This program takes an integer `n` from the user and prints the `n.` term of the Fibonacci sequence.

---

## ⚙️ How It Works

- The function `fibonacci(int n)` recursively adds `f(n-1) + f(n-2)` until it reaches the base case.
<img width="2042" height="1266" alt="fibonacci" src="https://github.com/user-attachments/assets/8d802db6-cc9b-4d48-8765-aeed112ab37f" />


## 🖨️ Example Output

Index: **4**  
3

---

## 📊 Conclusion

Recursive algorithms can be so useful when the programmer needs to divide the problem into smaller pieces and make it easier. However in some cases like my Fibonacci code, since there is no DP, recusion calculates same values over and over which makes the code so slow for big values. In cases like this, after declaring the base cases, linear programming would be more efficient.

---

## 🖥️ System Information and Technologies Used

- **RAM:** 16 GB Unified Memory  
- **Processor:** Apple M2  
  - 8-core CPU (4 performance + 4 efficiency cores)  
  - 10-core GPU  
  - ARM-based architecture (ARM64)  
- **Operating System:** macOS
- **Programming Language:** C++ (C++23 standard)
- **Chrono Library:** Used for precise time measurement
