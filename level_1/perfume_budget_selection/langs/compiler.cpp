#include <iostream>
#include <vector>
class Node {
public:
    int key;
    Node* left;
    Node* right;

    Node(int value) : key(value), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    if (value < root->key) {
        root->left = insert(root->left, value);
    } else if (value > root->key) {
        root->right = insert(root->right, value);
    }

    return root;
}

int main() {
    int n;
    std::cin >> n;
    int root_price;
    std::cin >> root_price;

    Node* root = new Node(root_price);

    for (int i = 0; i < n - 1; ++i) {
        int value;
        std::cin >> value;
        insert(root, value);
    }

    int customer_budget;
    std::cin >> customer_budget;

    std::vector<int> result = find_closest_perfumes(root, customer_budget);

    for (int i : result) {
        std::cout << i << " ";
    }

    return 0;
}
