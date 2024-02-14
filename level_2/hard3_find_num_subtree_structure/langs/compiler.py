def main():
    R, N, E = map(int, input().split())
    tree = create_tree_array(N + 1)
    for _ in range(E):
        node1, node2 = map(int, input().split())
        n1 = Node(node2)
        n1.next = tree[node1].neighbors
        tree[node1].neighbors = n1
        n2 = Node(node1)
        n2.next = tree[node2].neighbors
        tree[node2].neighbors = n2
    
    output_subtree_count = [0]
    find_num_subtree_structure(N, R, tree, output_subtree_count)

    print(output_subtree_count[0])

if __name__ == "__main__":
    main()
