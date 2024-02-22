class Node {
    int key;
    Node left;
    Node right;

    Node(int value) {
        key = value;
        left = null;
        right = null;
    }
}

class Main {
    public static Node insert(Node root, int value) {
        if (root == null) {
            return new Node(value);
        }
        if (value < root.key) {
            root.left = insert(root.left, value);
        } else if (value > root.key) {
            root.right = insert(root.right, value);
        }

        return root;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int rootPrice = scanner.nextInt();

        Node root = new Node(rootPrice);

        for (int i = 0; i < n - 1; ++i) {
            int value = scanner.nextInt();
            root = insert(root, value);
        }

        int customerBudget = scanner.nextInt();
        Test test = new Test();
        ArrayList<Integer> result = test.findClosestPerfumes(root, customerBudget);

        for (int i : result) {
            System.out.print(i + " ");
        }
    }
}