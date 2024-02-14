int main()
{
    int N, E, R;
    int output_subtree_count=0;
    cin >> R;
    cin >> N;
    cin >> E;

    unordered_map<int, vector<int>> tree;

    for (int i = 0; i < E; ++i) 
    {
        int node1, node2;
        cin >> node1 >> node2;
        tree[node1].push_back(node2);
        tree[node2].push_back(node1);
    }
    
    find_num_subtree_structure(N, R, tree, &output_subtree_count);
    
    cout << output_subtree_count;

    return 0;
}
