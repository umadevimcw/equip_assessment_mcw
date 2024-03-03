#define MAX_CHARS_PER_LINE 100
#define MAX_BUFFER_SIZE 100

int main()
{
    int target;
    int n;
    scanf("%d", &target);
    scanf("%d", &n);

    int *factors = (int *)(malloc(sizeof(int) * n));

    int num_elements = 0;
    char row[MAX_CHARS_PER_LINE];
    row[0] = '\0';
    char temp;
    scanf("%c", &temp);
    scanf("%[^\n]", row);

    char *tok;
    tok = strtok(row, " ");
    while (tok != NULL)
    {
        factors[num_elements] = atoi(tok);
        num_elements++;
        tok = strtok(NULL, " ");
    }
    // If any row has lesser/greater number of elements than n, the input is invalid
    if (num_elements != n)
    {
        printf("You have entered an invalid input!\n");
        return 1;
    }

    // Assume that the constraint for len(ans) is MAX_BUFFER_SIZE (i.e. 100)
    int ans[MAX_BUFFER_SIZE];
    for (int i = 0; i < MAX_BUFFER_SIZE; i++)
        ans[i] = -2;

    lexicographically_smallest(target, factors, n, ans);

    // Print the sorted matrix
    int i = 0;
    while (ans[i] != -2)
    {
        printf("%d ", ans[i]);
        i++;
    }
    printf("\n");

    // Free memory
    free(factors);

    return 0;
}