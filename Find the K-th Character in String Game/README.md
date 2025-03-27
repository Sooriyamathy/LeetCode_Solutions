
# 3304. Find the K-th Character in String Game I

## Problem Description

Alice and Bob are playing a game. Initially, Alice has a string `word = "a"`.

You are given a positive integer `k`.

Now Bob will ask Alice to perform the following operation forever:

- Generate a new string by changing each character in `word` to its next character in the English alphabet, and append it to the original word.
    - For example, performing the operation on "c" generates "cd" and performing the operation on "zb" generates "zbac".

The goal is to return the value of the k-th character in `word`, after enough operations have been done for `word` to have at least `k` characters.

Note that the character 'z' can be changed to 'a' in the operation.

## Example

### Example 1:
**Input:**
```python
k = 5
```

**Output:**
```python
"b"
```

**Explanation:**
Initially, `word = "a"`. We need to do the operation three times:

- Generated string is "b", word becomes "ab".
- Generated string is "bc", word becomes "abbc".
- Generated string is "bccd", word becomes "abbcbccd".

The 5th character in the final string is "b".

### Example 2:
**Input:**
```python
k = 10
```

**Output:**
```python
"c"
```

## Constraints:
- `1 <= k <= 500`

## Approach

1. **Initial Observation:**
   - Initially, Alice starts with the string `word = "a"`.
   - After each operation, the length of the string increases as the string expands by appending the "next character" version of the current string.
   - The string grows exponentially in length, so it is important to track the length and focus on efficiently finding the k-th character without explicitly constructing the full string.

2. **Strategy:**
   - Keep track of the string’s length as it grows.
   - For each iteration, calculate the new length and stop when the length exceeds `k`.
   - By using modular arithmetic and understanding the pattern of string growth, directly compute the k-th character.

## Solution

You can implement the solution by simulating the growth of the string or using a mathematical approach to find the k-th character directly without building the entire string.

```python
#include <stdio.h>
#include <stdlib.h>

char kthCharacter(int k) {
    char a = 'a';
    int size = 1;
    char* b = (char*)malloc(sizeof(char));
    
    if (!b) { // Handle memory allocation failure
        return '\0';
    }

    *b = a;

    // Generate the sequence until size is large enough
    while (size < k) {
        int old_size = size;
        size *= 2;

        b = (char*)realloc(b, size * sizeof(char));
        if (!b) { // Handle realloc failure
            return '\0';
        }

        // Update the second half of the array
        for (int j = 0; j < old_size; j++) {
            b[j + old_size] = b[j] + 1;
        }
    }

    // Return the k-th character (0-based index, so b[k-1] for 1-based index)
    char result = b[k - 1];
    free(b); // Free the allocated memory
    return result;
}
```

## Conclusion

This approach efficiently calculates the k-th character in the growing string sequence by simulating the growth process without generating the entire sequence. This solution works within the problem's constraints and avoids unnecessary memory usage.
