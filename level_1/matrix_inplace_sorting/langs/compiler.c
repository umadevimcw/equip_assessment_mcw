#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS_PER_LINE 100

int main()
{
    int m;
    int n;
    int **input;
    scanf("%d", &m);
    scanf("%d", &n);

    input = (int **)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++)
        input[i] = (int *)malloc(n * sizeof(int));

    char temp;
    char row[MAX_CHARS_PER_LINE];
    row[0] = '\0';
    int invalid = 0;
    for (int i = 0; i < m; i++)
    {
        int num_elements_in_a_row = 0;
        scanf("%c", &temp);
        scanf("%[^\n]", row);
        // Check if the string/row is empty
        if (row[0] == '\0')
        {
            invalid = 1;
            break;
        }

        char *tok;
        tok = strtok(row, " ");
        while (tok != NULL)
        {
            input[i][num_elements_in_a_row] = atoi(tok);
            num_elements_in_a_row++;
            tok = strtok(NULL, " ");
        }
        // If any row has lesser/greater number of elements than n, the input is invalid
        if (num_elements_in_a_row != n)
            invalid = 1;
    }

    // Check if the input is valid
    if (invalid)
    {
        printf("You have entered an invalid input!\n");
        return 1;
    }

    sortMatrix(input, m, n);
    // Print the sorted matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", input[i][j]);
        }
        printf("\n");
    }
    return 0;
}