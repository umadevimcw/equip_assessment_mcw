int main() {
    int n;
    scanf("%d", &n);

    char* names[n];
    int weights[n];

    for (int i = 0; i < n; i++) {
        names[i] = (char*)malloc(50 * sizeof(char));
        scanf("%s", names[i]);
    }

    for (int i = 0; i < n; i++)
        scanf("%d", &weights[i]);

    char** sortedNames = sortNamesByWeight(n, names, weights);

    for (int i = 0; i < n; i++) 
    {
        printf("%s ", sortedNames[i]);
        free(sortedNames[i]);
    }

    free(sortedNames);

    for (int i = 0; i < n; i++) 
    {
        free(names[i]);
    }

    return 0;
}
