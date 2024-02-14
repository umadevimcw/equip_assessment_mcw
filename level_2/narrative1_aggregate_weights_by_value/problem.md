# Problem

### Statement
Given two 2D integer arrays, `set1` and `set2`. Each array sets has the following properties:
`set[i] = [value i, weight i]` where `value i` represents the value and `weight i` represents the weight of the ith set.
The value of each set in `sets` is unique.
Return a 2D integer array `ret` where `ret[i] = [value i, weight i]`, with `weight i` being the sum of weights of all sets with value `value i`.
Note: `ret` should be returned in ascending order by value.

### Input Format
- M(Size of set1)
- set1
- N(Size of set2)
- set2 
### Test Cases
1. 
    #### Input:
    - 3
    - 1 1
      4 5
      3 8
    - 2
    - 3 1
      1 5
    #### Output:
    - 1 6
      3 9
      4 5
2.
    #### Input:   
    - 3
    - 1 1
      3 2
      2 3
    - 3
    - 2 1
      3 2
      1 3
    #### Output:
    - 1 4
      2 4
      2 4
3.
    #### Input:
    - 2
    - 1 3
      2 2
    - 3
    - 7 1
    - 2 2
    - 1 4
    #### Output:
    - 1 7
      2 4
      7 1 

