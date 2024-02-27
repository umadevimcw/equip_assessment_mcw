class Node {
    int data;
    Node next;

    Node(int val) {
        data = val;
        next = null;
    }
}

class Main {
    public static Node insert(Node head, int value) {
        if (head == null) {
            return new Node(value);
        }
        Node current = head;
        while (current.next != null) {
            current = current.next;
        }
        current.next = new Node(value);
        return head;
    }

    public static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        Node head = null;
        for (int i = 0; i < N; ++i) {
            int value = scanner.nextInt();
            head = insert(head, value);
        }
        Test test = new Test();
        ArrayList<Node> result = test.splitAlternateNodes(head);
        printList(result.get(0));
        printList(result.get(1));
    }
}
