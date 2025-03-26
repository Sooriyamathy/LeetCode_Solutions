# Flip and Invert Image

## Problem Description:

Given an `n x n` binary matrix `image`, you are tasked with **flipping the image horizontally**, then **inverting** it, and returning the resulting image.

### Flip Operation:
To **flip** an image horizontally means that each row of the image is reversed.

#### Example:
- Flipping `[1, 1, 0]` horizontally results in `[0, 1, 1]`.

### Invert Operation:
To **invert** an image means that each `0` is replaced by `1`, and each `1` is replaced by `0`.

#### Example:
- Inverting `[0, 1, 1]` results in `[1, 0, 0]`.

### Problem Example:

#### Input:
```python
image = [[1, 1, 0], [1, 0, 1], [0, 0, 0]]
