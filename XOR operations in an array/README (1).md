
# XOR Operation in an Array - LeetCode Problem 1486

## Problem Statement

You are given an integer `n` and an integer `start`.

Define an array `nums` where `nums[i] = start + 2 * i` (0-indexed) and `n == nums.length`.

Return the **bitwise XOR** of all elements of the `nums` array.

### Example 1:
#### Input:
```plaintext
n = 5, start = 0
```

#### Output:
```plaintext
8
```

#### Explanation:
The array `nums` is equal to `[0, 2, 4, 6, 8]`, and the bitwise XOR operation on all elements gives:
```plaintext
0 ^ 2 ^ 4 ^ 6 ^ 8 = 8
```

### Example 2:
#### Input:
```plaintext
n = 4, start = 3
```

#### Output:
```plaintext
8
```

#### Explanation:
The array `nums` is equal to `[3, 5, 7, 9]`, and the bitwise XOR operation on all elements gives:
```plaintext
3 ^ 5 ^ 7 ^ 9 = 8
```

---

## Approach

The problem asks us to compute the **bitwise XOR** of all elements in an array where:
- Each element `nums[i]` is calculated as `start + 2 * i`.
- We need to compute the XOR for all elements in the array.
