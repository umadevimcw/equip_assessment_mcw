# Problem

## Statement

Given an unsorted array of length N and a number R, find if there exists a 
pair of elements in the array whose difference is R.

### Input format:
- R
- N
- List of N integers

### Test Cases
1.
    #### Input:
    - 78
    - 6
    - 5 20 3 2 50 80

    #### Output: 
    - (2, 80)
2.
    #### Input:
    - 45
    - 5
    - 90 70 20 80 50
    #### Output:
    - No Such Pair
3.
    #### Input:
    - 10
    - 5
    - 23 55 33 72 43
    #### Output:
    <pre>
    - (23, 33)
      (33, 43)
    </pre>