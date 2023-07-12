# cpp-practice

## Time Complexity

- **Time Complexity**: Time Complexity is defined as the number of times a particular instruction set is executed rather than the total time taken. It is because the total time took also depends on some external factors like the compiler used, processor’s speed, etc.

- **Space Complexity**: Space Complexity is the total memory space required by the program for its execution.

Both are calculated as the function of input size(n).

- **Types Of Time Complexity:**

  - **Best Time Complexity**: Define the input for which algorithm takes less time or minimum time. In the best case calculate the lower bound of an algorithm. Example: In the linear search when search data is present at the first location of large data then the best case occurs.
  - **Average Time Complexity**: In the average case take all random inputs and calculate the computation time for all inputs. And then we divide it by the total number of inputs.
  - **Worst Time Complexity**: Define the input for which algorithm takes a long time or maximum time. In the worst calculate the upper bound of an algorithm. Example: In the linear search when search data is present at the last location of large data then the worst case occurs.

| Algorithm | Best | Average | Worst | Space | Deletion |
| :--: | :--: | :--: | :--: | :--: | :--: |
| **Selection Sort** | O(n<sup>2</sup>) | O(n<sup>2</sup>) | O(n<sup>2</sup>) | O(1) | - |
| **Bubble Sort** | O(n) | O(n<sup>2</sup>) | O(n<sup>2</sup>) | O(1) | - |
| **Insertion Sort** | O(n) | O(n<sup>2</sup>) | O(n<sup>2</sup>) | O(1) | - |
| **Heap Sort** | O(n log(n)) | O(n log(n)) | O(n log(n)) | O(1) | - |
| **Merge Sort** | O(n log(n)) | O(n log(n)) | O(n log(n)) | O(n) | - |
| **Array** | O(1) | O(1) | O(1) | - | O(1) |
| **Stack** | O(1) | 0(1) | O(1) | - | O(1) |
| **Queue** | O(1) | O(1) | O(1) | - | O(1) |
| **Singly Linked** | O(1) | O(1) | O(1) | - | O(1) |
| **Doubly Linked** | O(1) | O(1) | O(1) | - | O(1) |
| **Hash Table** | O(1) | O(1) | O(1) | - | O(1) |
| **Binary Search Tree** | O(log n) | O(log n) | O(log n) | - | O(log n) |

- [Linear Search](https://github.com/Reubzz/cpp-practice/blob/8333ff5fa3034f4555d6368e98d1282f53dbbdfd/assignment%20questions/Q1.cpp#L98)

### Sorting

- [Selection Sort](https://github.com/Reubzz/cpp-practice/blob/master/assignment%20questions/Q1.cpp#L158)
- [Bubble Sort](https://github.com/Reubzz/cpp-practice/blob/master/assignment%20questions/Q1.cpp#L177)
- [Insertion Sort](https://github.com/Reubzz/cpp-practice/blob/master/assignment%20questions/Q1.cpp#L195)
- [Heap Sort](./Heap%20Sort.cpp)
- [Merge Sort](./Merge%20sort.cpp)

### Matrix

- [Add/Sub 2 Matrix](./assignment%20questions/Q2-7.cpp)
- [Principal Diagonal](https://github.com/Reubzz/cpp-practice/blob/master/assignment%20questions/Q2.cpp#L42)
- [Reverse Diagonal](https://github.com/Reubzz/cpp-practice/blob/master/assignment%20questions/Q2.cpp#L77)
- [Lower Triangle](https://github.com/Reubzz/cpp-practice/blob/master/assignment%20questions/Q2.cpp#L53)
- [Upper Triangle](https://github.com/Reubzz/cpp-practice/blob/master/assignment%20questions/Q2.cpp#L65)
- [Transpose](https://github.com/Reubzz/cpp-practice/blob/master/assignment%20questions/Q2.cpp#L93)
- [Unit Matrix](https://github.com/Reubzz/cpp-practice/blob/master/assignment%20questions/Q2.cpp#L104)

- [Marksheet Program](./assignment%20questions/Q3.cpp)

### Types of Data Structures

- [Circular Queue](./QUEUE.CPP)
- [Stacks](./stack.cpp)
