#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insert(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    return head;
}

// Function to print the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    int N, value;

    scanf("%d", &N);
    struct Node* head = NULL;

    for (int i = 0; i < N; ++i) {
        scanf("%d", &value);
        head = insert(head, value);
    }

    struct Node** result = splitAlternateNodes(head);

    printList(result[0]);
    printList(result[1]);

    free(result[0]);
    free(result[1]);

    return 0;
}
