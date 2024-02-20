#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int key;
    struct Node* left;
    struct Node* right;
} Node;

Node* create_node(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (root == NULL) {
        return create_node(value);
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
    scanf("%d", &n);
    int root_price;
    scanf("%d", &root_price);

    Node* root = create_node(root_price);

    for (int i = 0; i < n - 1; ++i) {
        int value;
        scanf("%d", &value);
        insert(root, value);
    }

    int customer_budget;
    scanf("%d", &customer_budget);

    int closest_lower = -1;
    int closest_upper = -1;
    bool found_x = false;
    find_closest_perfumes(root, customer_budget, &closest_lower, &closest_upper, &found_x);

    if (found_x) {
        printf("%d ", customer_budget);
    }
    if (closest_lower != -1) {
        printf("%d ", closest_lower);
    }
    if (closest_upper != -1) {
        printf("%d ", closest_upper);
    }

    return 0;
}
