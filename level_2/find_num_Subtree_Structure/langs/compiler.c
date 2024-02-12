int main() 
{
    int N, E, R;
    scanf("%d %d %d", &R, &N, &E);

    Tree* tree = createTreeArray(N +  1);

    for (int i =  0; i < E; ++i) 
    {
        int node1, node2;
        scanf("%d %d", &node1, &node2);
        Node* n1 = (Node*)malloc(sizeof(Node));
        n1->value = node2;
        n1->next = tree[node1].neighbors;
        tree[node1].neighbors = n1;

        Node* n2 = (Node*)malloc(sizeof(Node));
        n2->value = node1;
        n2->next = tree[node2].neighbors;
        tree[node2].neighbors = n2;
    }

    int output_subtree_count =  0;
    find_num_Subtree_Structure(N, R, tree, &output_subtree_count);

    printf("%d\n", output_subtree_count);

    freeTreeArray(tree, N +  1);

    return  0;
}
