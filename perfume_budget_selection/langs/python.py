class Node:
    def __init__(self, value):
        self.key = value
        self.left = None
        self.right = None

def insert(root, value):
    if root is None:
        return Node(value)
    if value < root.key:
        root.left = insert(root.left, value)
    elif value > root.key:
        root.right = insert(root.right, value)

    return root

def find_closest_perfumes(root, x):
    closest_lower = None
    closest_upper = None
    found_root = False
    while root:
        if root.key < x:
            closest_lower = root.key
            root = root.right
        elif root.key > x:
            closest_upper = root.key
            root = root.left
        else:
            found_root = True
            root_left = root.left
            root_right = root.right
        
            while root_left:
                closest_lower = root_left.key
                root_left = root_left.right
        
            while root_right:
                closest_upper = root_right.key
                root_right = root_right.left
            break
    res = []
    if found_root:
        res.append(x)
    if closest_lower is not None:
        res.append(closest_lower)
    if closest_upper is not None:
        res.append(closest_upper)
    return res


def main():
    n = int(input())
    root_price = int(input())
    root = Node(root_price)

    for _ in range(n - 1):
        price = int(input())
        insert(root, price)

    customer_budget = int(input())

    result = find_closest_perfumes(root, customer_budget)
    print(*result)

if __name__ == "__main__":
    main()
