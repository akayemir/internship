# Binary Search Algorithm

This project compares the execution times of the **Linear Search** and **Binary Search** algorithms across arrays of various sizes and search conditions.

## 📌 Description

The goal of this code is to measure how both search algorithms perform under different conditions by analyzing execution times. The test is performed using 10 different array sizes, and each array is searched under four different scenarios.

---

## 🧪 Array Sizes Tested

10, 50, 100, 500, 1000, 5000, 10000, 50000, 100000, 150000

---

## 🔍 Search Conditions

1. Target element is **near the beginning** of the array  
2. Target element is **near the middle** of the array  
3. Target element is **near the end** of the array  
4. Target element **does not exist** in the array  

---

## ⚙️ Functions Used

| Function Name             | Description                                                                 |
|---------------------------|-----------------------------------------------------------------------------|
| `void arrayMaker()`       | Fills the array with randomly generated integers                            |
| `void arraySorter()`      | Sorts the array using **Selection Sort** – time complexity: **O(n²)**       |
| `int linearSearch()`      | Performs a **Linear Search** – time complexity: **O(n)**                    |
| `int binarySearch()`      | Performs a **Binary Search** – time complexity: **O(log n)**                |
| `int chooserBeginning()`  | Selects a value located near the beginning of the array                     |
| `int chooserMiddle()`     | Selects a value located near the middle of the array                        |
| `int chooserEnd()`        | Selects a value located near the end of the array                           |
| `int chooserNonExist()`   | Generates a value guaranteed not to exist in the array                      |
| `void timerLinearSearch()`| Measures execution time of `linearSearch()` using the `chrono` library      |
| `void timerBinarySearch()`| Measures execution time of `binarySearch()` using the `chrono` library      |

---

## 🖨️ Output Format

Index of [Array Size] Array  
Linear Search  
Time → Execution time for value near beginning  
Time → Execution time for value near middle  
Time → Execution time for value near end  
Time → Execution time for non-existent value  

Binary Search  
Time → Execution time for value near beginning  
Time → Execution time for value near middle  
Time → Execution time for value near end  
Time → Execution time for non-existent value  

---

## 📊 Conclusion

The experiment highlights the significant performance difference between **O(n)** and **O(log n)** algorithms as the array size increases. Even at a relatively small size like **150,000 elements**, the **Binary Search** algorithm demonstrates a speed advantage being up to **1000 times faster** than **Linear Search** in some cases.

---

## 🧠 Observations

- The location of the target value (beginning, middle, end) greatly impacts the execution time of **Linear Search**, but has minimal effect on **Binary Search**.
- These results align with theoretical time complexities and emphasize the importance of choosing the right algorithm for the problem.

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

---

## Note

⚠️ The execution times measured by this program may vary between runs!

---

## 🖨️ Example Output

1  
Linear Search  
Time difference for array which has 10 elements = 125[ns]  
Time difference for array which has 10 elements = 125[ns]  
Time difference for array which has 10 elements = 125[ns]  
Time difference for array which has 10 elements = 166[ns]  
  
Binary Search  
Time difference for array which has 10 elements = 167[ns]  
Time difference for array which has 10 elements = 84[ns]  
Time difference for array which has 10 elements = 167[ns]  
Time difference for array which has 10 elements = 166[ns]  
  
2  
Linear Search  
Time difference for array which has 50 elements = 42[ns]  
Time difference for array which has 50 elements = 208[ns]  
Time difference for array which has 50 elements = 291[ns]  
Time difference for array which has 50 elements = 292[ns]  
  
Binary Search  
Time difference for array which has 50 elements = 208[ns]  
Time difference for array which has 50 elements = 208[ns]  
Time difference for array which has 50 elements = 208[ns]  
Time difference for array which has 50 elements = 208[ns]  
  
3  
Linear Search  
Time difference for array which has 100 elements = 83[ns]  
Time difference for array which has 100 elements = 250[ns]  
Time difference for array which has 100 elements = 459[ns]  
Time difference for array which has 100 elements = 458[ns]  
  
Binary Search  
Time difference for array which has 100 elements = 125[ns]  
Time difference for array which has 100 elements = 167[ns]  
Time difference for array which has 100 elements = 125[ns]  
Time difference for array which has 100 elements = 209[ns]  
  
4  
Linear Search  
Time difference for array which has 500 elements = 333[ns]  
Time difference for array which has 500 elements = 1042[ns]  
Time difference for array which has 500 elements = 1958[ns]  
Time difference for array which has 500 elements = 2125[ns]  
  
Binary Search  
Time difference for array which has 500 elements = 250[ns]  
Time difference for array which has 500 elements = 250[ns]  
Time difference for array which has 500 elements = 167[ns]  
Time difference for array which has 500 elements = 292[ns]  
  
5  
Linear Search  
Time difference for array which has 1000 elements = 84[ns]  
Time difference for array which has 1000 elements = 1583[ns]  
Time difference for array which has 1000 elements = 2750[ns]  
Time difference for array which has 1000 elements = 3166[ns]  
  
Binary Search  
Time difference for array which has 1000 elements = 208[ns]  
Time difference for array which has 1000 elements = 208[ns]  
Time difference for array which has 1000 elements = 250[ns]  
Time difference for array which has 1000 elements = 167[ns]  
  
6  
Linear Search  
Time difference for array which has 5000 elements = 583[ns]  
Time difference for array which has 5000 elements = 4083[ns]  
Time difference for array which has 5000 elements = 8666[ns]  
Time difference for array which has 5000 elements = 9583[ns]  
  
Binary Search  
Time difference for array which has 5000 elements = 167[ns]  
Time difference for array which has 5000 elements = 166[ns]  
Time difference for array which has 5000 elements = 167[ns]  
Time difference for array which has 5000 elements = 167[ns]  
  
7  
Linear Search  
Time difference for array which has 10000 elements = 208[ns]  
Time difference for array which has 10000 elements = 7083[ns]  
Time difference for array which has 10000 elements = 13584[ns]  
Time difference for array which has 10000 elements = 15291[ns]  
  
Binary Search  
Time difference for array which has 10000 elements = 208[ns]  
Time difference for array which has 10000 elements = 125[ns]  
Time difference for array which has 10000 elements = 84[ns]  
Time difference for array which has 10000 elements = 125[ns]  
  
8  
Linear Search  
Time difference for array which has 50000 elements = 584[ns]  
Time difference for array which has 50000 elements = 29083[ns]  
Time difference for array which has 50000 elements = 53208[ns]  
Time difference for array which has 50000 elements = 57208[ns]  
  
Binary Search  
Time difference for array which has 50000 elements = 42[ns]  
Time difference for array which has 50000 elements = 83[ns]  
Time difference for array which has 50000 elements = 125[ns]  
Time difference for array which has 50000 elements = 125[ns]  
  
9  
Linear Search  
Time difference for array which has 100000 elements = 8333[ns]  
Time difference for array which has 100000 elements = 69667[ns]  
Time difference for array which has 100000 elements = 123167[ns]  
Time difference for array which has 100000 elements = 132875[ns]  
  
Binary Search  
Time difference for array which has 100000 elements = 208[ns]  
Time difference for array which has 100000 elements = 250[ns]  
Time difference for array which has 100000 elements = 125[ns]  
Time difference for array which has 100000 elements = 167[ns]  
  
10  
Linear Search  
Time difference for array which has 150000 elements = 10333[ns]  
Time difference for array which has 150000 elements = 90667[ns]  
Time difference for array which has 150000 elements = 175541[ns]  
Time difference for array which has 150000 elements = 191583[ns]  
  
Binary Search  
Time difference for array which has 150000 elements = 166[ns]  
Time difference for array which has 150000 elements = 209[ns]  
Time difference for array which has 150000 elements = 209[ns]  
Time difference for array which has 150000 elements = 167[ns]  

