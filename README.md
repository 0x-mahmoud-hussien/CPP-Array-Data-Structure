# 📊 Array Management System (Using Vector in C++)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

**Author:** [Mahmoud Hussein](https://github.com/0x-mahmoud-hussien)
📧 **Email:** mahmoud.abdelmaqsoud.hussien@gmail.com  
[اقرأ باللغة العربية (Read in Arabic)](README_AR.md)

---

## 🧠 Overview  
This program is a **comprehensive Array Management System** written in **C++**, built using the **STL `vector` container**. It demonstrates over **45 array-related operations**, including inserting, deleting, sorting, searching, and performing statistical and algorithmic calculations.

---

## ⚙️ Features & Methods

| No. | Method Name | Description |
|-----|--------------|-------------|
| 1 | `inputElements()` | Takes user input and fills the array. |
| 2 | `print()` | Displays all elements of the array. |
| 3 | `sum()` | Returns the total sum of array elements. |
| 4 | `average()` | Calculates the average of all elements. |
| 5 | `getMaximum()` | Finds the largest element in the array. |
| 6 | `getMinimum()` | Finds the smallest element in the array. |
| 7 | `getSecondMaximum()` | Finds the second largest element. |
| 8 | `getSecondMinimum()` | Finds the second smallest element. |
| 9 | `getThirdMaximum()` | Finds the third largest element. |
| 10 | `search()` | Searches for a specific value and prints its index if found. |
| 11 | `count()` | Counts how many times a number appears in the array. |
| 12 | `deleteAt()` | Deletes an element at a given index. |
| 13 | `deleteMaximum()` | Removes the maximum element from the array. |
| 14 | `deleteMinimum()` | Removes the minimum element from the array. |
| 15 | `deleteSecondMaximum()` | Removes the second maximum element. |
| 16 | `deleteSecondMinimum()` | Removes the second minimum element. |
| 17 | `append()` | Adds a new element to the end of the array in **O(1) time**. |
| 18 | `prepend()` | Inserts an element at the beginning of the array. |
| 19 | `insertAt()` | Inserts an element at a specific position. |
| 20 | `isSorted()` | Checks if the array is sorted in ascending order. |
| 21 | `bubbleSort()` | Sorts the array using Bubble Sort algorithm. |
| 22 | `selectionSort()` | Sorts the array using Selection Sort algorithm. |
| 23 | `insertionSort()` | Sorts the array using Insertion Sort algorithm. |
| 24 | `reverseArray()` | Reverses the entire array. |
| 25 | `reverseInGroups()` | Reverses elements in groups of size `k`. |
| 26 | `moveZerosToEnd()` | Moves all zeros to the end of the array. |
| 27 | `rearrange()` | Moves negative numbers to the front of the array. |
| 28 | `rotateLeft(int k)` | Rotates the array left by `k` positions **efficiently (O(n)) using `std::rotate`**. |
| 29 | `rotateRight(int k)` | Rotates the array right by `k` positions **efficiently (O(n)) using `std::rotate`**. |
| 30 | `findMissingElements()` | Finds missing numbers between the smallest and largest elements. |
| 31 | `countEvenOdd()` | Counts how many even and odd elements exist. |
| 32 | `checkDuplicates()` | Checks if there are any duplicate elements. |
| 33 | `removeDuplicates()` | Removes duplicates using the **efficient sort-unique-erase idiom**. |
| 34 | `twoSum()` | Finds a pair of numbers whose sum equals a target value. |
| 35 | `maxSubarraySum()` | Uses **Kadane’s algorithm** to find the largest subarray sum. |
| 36 | `mostFrequent()` | Finds the most frequently occurring element. |
| 37 | `printSubarrays()` | Prints all possible subarrays. |
| 38 | `isPermutation(int n)` | Checks if the array is a permutation of numbers 1 to n. |
| 39 | `findMedian()` | Calculates and returns the median value. |
| 40 | `findMode()` | Finds the mode (most frequent element). |
| 41 | `frequencyTable()` | Prints the frequency of each unique element. |
| 42 | `isPalindrome()` | Checks if the array is a palindrome. |
| 43 | `subArraySum()` | Finds a subarray with a specific target sum. |
| 44 | `clearArray()` | Clears all elements from the array. |
| 45 | `getSize()` | Returns the number of elements in the array. |

---

## 🧩 Technologies Used
- **C++ Standard Template Library (STL)**  
- **Vector Container**  
- **Algorithm Library** (`<algorithm>`)
- **Control Structures & Functions**

---

## 🏁 How to Run

1.  Compile the file using a C++ compiler:
    ```bash
    g++ ArrayDS.cpp -o ArrayDS
    ```
2.  Run the executable:
    ```bash
    ./ArrayDS
    ```

---

## 📋 Menu Overview
The program includes a **menu-driven interface** allowing you to test all 45+ operations interactively, including:
- Input/Output operations  
- Mathematical and statistical operations  
- Insertion and deletion  
- Sorting and rearrangement  
- Advanced algorithmic operations like *Kadane’s Algorithm*, *Two Sum*, and *Permutation check*.

---

## 📜 License
This project is licensed under the MIT License.

---

## 🧠 Example Output
```
====== Welcome to Array Data Structure Program (Vector) ======
============ ARRAY OPERATIONS MENU (VECTOR) ============
1.   Input Array Elements
2.   Print Array
...
45.  Check if Permutation
0.   Exit
========================================================
Enter your choice: 
```