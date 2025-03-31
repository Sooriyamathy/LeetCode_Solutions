# Median of Two Sorted Arrays

## Description
This C program finds the median of two sorted arrays using an efficient binary search approach. The algorithm ensures an optimal runtime complexity of **O(log(min(m, n)))**, making it suitable for large datasets.

## Algorithm Explanation
- The function **`findMedianSortedArrays`** takes two sorted arrays and their respective sizes as input.
- To optimize the search, the binary search is always performed on the smaller array.
- The function partitions both arrays such that all elements on the left partition are less than or equal to all elements on the right partition.
- If the partition is correct, the median is computed based on the merged length of the two arrays.
- If the partition is incorrect, the binary search is adjusted accordingly.

## Complexity
- **Time Complexity:** `O(log(min(m, n)))`
- **Space Complexity:** `O(1)` (No additional memory allocation)

## Usage
### Compilation
Use `gcc` to compile the program:
```sh
gcc median.c -o median -lm
```
### Execution
Run the compiled program:
```sh
./median
```

## Example
### Input:
```c
int nums1[] = {1, 3};
int nums2[] = {2};
```
### Output:
```
Median: 2.000000
```

### Another Example:
#### Input:
```c
int nums3[] = {1, 2};
int nums4[] = {3, 4};
```
#### Output:
```
Median: 2.500000
```

## Edge Cases Considered
- Arrays of different sizes.
- One of the arrays being empty.
- Arrays containing negative and large numbers.
- Arrays with duplicate elements.

## License
This project is open-source and available under the MIT License.

## Author
**Sooriya Mathy**
