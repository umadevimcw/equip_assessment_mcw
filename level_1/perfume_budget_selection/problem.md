# Problem

### Statement
We have a perfume shop which sells perfumees of different costs.
Customer wants to buy a perfume based on his budget. The budget might not exactly match with the MRP of any perfume. So we need to find two perfumees with price closer to the budget of the customer - one cheaper and one costlier. If the budget matches exactly with any perfume, we anyway present the customer with three different options.
You will be given the list of perfumees and their prices in a binary search tree with a root node.
Given the budget from customer, find the perfumees that are close to it in price.

### Input format:
- N (Number of input nodes)
- Root price node
- Other price nodes
- Budget

### Test Cases
1.
    #### Input:
    - 7
    - 500
    - 320 260 440 760 680 810
    - 720
    #### Output:
    - 680 760


