public static void main(String[] args) 
{
    Scanner scanner = new Scanner(System.in);
    int R = scanner.nextInt();
    int N = scanner.nextInt();
    int E = scanner.nextInt();

    Map<Integer, List<Integer>> tree = new HashMap<>();

    for (int i = 0; i < E; ++i)
    {
        int node1 = scanner.nextInt();
        int node2 = scanner.nextInt();
        tree.computeIfAbsent(node1, k -> new ArrayList<>()).add(node2);
        tree.computeIfAbsent(node2, k -> new ArrayList<>()).add(node1);
    }

    int[] outputSubtreeCount = new int[1]; // Array to store the result
    find_num_subtree_structure(N, R, tree, outputSubtreeCount);
    System.out.println(outputSubtreeCount[0]);
}

