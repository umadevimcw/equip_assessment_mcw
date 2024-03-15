#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node {
    int key;
    struct Node* left;
    struct Node* right;
} Node;

void find_closest_perfumes(Node* root, int x, int* closest_lower, int* closest_upper, bool* found_x) {
    //Code Here
    //update closest_lower if closest lowest found
    //update found_x if given x is found
    //update closest_upper if closest upper found
    return;
}