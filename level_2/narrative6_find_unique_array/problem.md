# Problem

### Statement
You are given an array sets of  integers. sets is considered unique if there exists a number y such that there are exactly y numbers in sets that are greater than or equal to y.
Note: y does not have to be an element in sets.
Return y number if the array is unique, otherwise, return FALSE. It can be proven that if sets is unique, the value for y is unique.

### Test Cases
1.  |       Input	     |  Expected Output   |
    |--------------------|--------------------|
    |          2         |                    |
    |          3 5       |         2          |

2.  |       Input	     |  Expected Output   |
    |--------------------|--------------------|
    |          2         |                    |
    |          0 0       |        FALSE       |

3.  |       Input	     |  Expected Output   |
    |--------------------|--------------------|
    |          5         |                    |
    |          0 4 3 0 4 |          3         |




