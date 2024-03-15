class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

def insert(head, value):
    if head is None:
        return Node(value)

    current = head
    while current.next:
        current = current.next

    current.next = Node(value)
    return head

def print_list(head):
    while head:
        print(head.data, end=" ")
        head = head.next
    print()

def main():
    N = int(input())
    head = None
    input_ = input()
    input_ = input_.split(" ")
    for i in range(N):
        value = int(input_[i])
        head = insert(head, value)

    result = split_alternate_nodes(head)
    print_list(result[0])
    print_list(result[1])

if __name__ == "__main__":
    main()
