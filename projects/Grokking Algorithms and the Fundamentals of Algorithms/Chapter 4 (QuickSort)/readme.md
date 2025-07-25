# QuickSort Algorithm

This project creates a 10000 sized array with random generated numbers. Sorts this array with quicksort algorithm and checks if this array is sorted correctly.

## 📌 Description

The goal of this code is to do an implemantation practice of the quicksort algorithm and understand how it works.


---

## ⚙️ Functions Used

| Function Name             | Description                                                                                |
|---------------------------|--------------------------------------------------------------------------------------------|
| `void arrayMaker()`       | Fills the array with randomly generated integers                                           |
| `int pivotSupposedIndex()`| Finds the pivot index and swap elements to arrange the array according to pivot            |
| `void quickSort()`        | Initially calls pivotSupposedIndex, then calls itself for the left and right side of pivot |
| `bool isSorted()`         | For loop to check if quickSort is executed correctly                                       |


---

## 🖨️ Output Format

Array is sorted. || Array is not sorted.

---

## 📊 Conclusion

QuickSort is a sorting algorithm that selects a pivot index, places it in its correct position, and then recursively divides the array (divide and conquer). It has an average time complexity of **O(n log n)** and a worst-case of **O(n²)**. Although MergeSort offers similar time complexity, QuickSort is more widely used in practice due to its **lower memory usage** thanks to its in-place sorting nature.


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



 
