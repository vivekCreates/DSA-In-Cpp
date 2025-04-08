# Data Structures and Algorithms (DSA)

## Arrays and Vectors

### Arrays
- Fixed-size contiguous memory allocation
- Zero-based indexing in C++
- Direct access using index O(1)
- Common operations:
    - Insertion/Deletion at end O(1)
    - Insertion/Deletion at middle O(n)
    - Linear search O(n)
    - Binary search O(log n) on sorted arrays

### Vectors
- Dynamic size array implementation
- Part of C++ STL
- Automatic memory management
- Key functions:
    - `push_back()` - Add element at end
    - `pop_back()` - Remove last element
    - `size()` - Current number of elements
    - `capacity()` - Current storage capacity

### Basic Operations
```cpp
// Vector examples
vector<int> v;
v.push_back(1);    // Adding elements
v.pop_back();      // Removing elements
v.size();          // Get size
v.empty();         // Check if empty
```

### Time Complexities
| Operation | Array | Vector |
|-----------|-------|---------|
| Access    | O(1)  | O(1)    |
| Insert End| O(1)  | O(1)*   |
| Delete End| O(1)  | O(1)    |
| Insert Mid| O(n)  | O(n)    |
| Delete Mid| O(n)  | O(n)    |

*Amortized time complexity