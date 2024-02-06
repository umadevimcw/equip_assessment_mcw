class Node:
    def __init__(self, value):
        self.key = value
        self.left = None
        self.right = None

def find_closest_perfumes(root, x):
    # Code here
    pass

def insert(root, value):
    if root is None:
        return Node(value)
    if value < root.key:
        root.left = insert(root.left, value)
    elif value > root.key:
        root.right = insert(root.right, value)
    return root

def main():
    n = int(input())
    root_price = int(input())
    other_node_price = input()
    customer_budget = int(input())
    s = other_node_price.split(" ")
    if len(s) != n-1:
        print("You have entered an invalid input")

    root = Node(root_price)

    for i in range(n - 1):
        insert(root, int(s[i]))


    result = find_closest_perfumes(root, customer_budget)
    print(*result)

if __name__ == "__main__":
    main()
