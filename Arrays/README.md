# Arrays (DSA in C++)

This folder contains **array-based Data Structure and Algorithm problems**
implemented in **C++** for interview preparation.

---

## 📌 Concepts Covered
- Traversal
- Prefix Sum 
- Prefix & Suffix Product
- Hashing
- Two Pointer Technique
- Sliding Window
- Sorting-based approaches

---

## 🧩 Problems Solved

| No. | Problem Name | Approach | Time | Space |
|----|--------------|----------|------|-------|
| 1 | Two Sum | Hashing (Map) | O(n) | O(n) |
| 2 | Product of Array Except Self | Prefix & Suffix Product | O(n) | O(1)* |
| 3 | Container With Most Water | Two Pointer | O(n) | O(1) |
| 4 | Sort Colors | Dutch National Flag Algorithm | O(n) | O(1) |


\* Space complexity excludes the output array.

---

## 📂 File Structure

## 🔹 Product of Array Except Self

**Problem:**  
Return an array where each element is the product of all elements except itself.

**Approach:**  
- Prefix product to store product of elements before index  
- Suffix product to multiply elements after index  
- Division is not used

**Complexity:**  
- Time: `O(n)`
- Space: `O(1)` (excluding output array)

**File:**  
`Product_of_Array_Except_Self.cpp`
