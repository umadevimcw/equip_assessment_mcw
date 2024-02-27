#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* insert(Node* head, int value) {
    if (head == nullptr) {
        return new Node(value);
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = new Node(value);
    return head;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int N, value;

    cin >> N;
    Node* head = nullptr;
    for (int i = 0; i < N; ++i) {
        cin >> value;
        head = insert(head, value);
    }
    vector<Node*> result = splitAlternateNodes(head);
    printList(result[0]);
    printList(result[1]);
    return 0;
}
