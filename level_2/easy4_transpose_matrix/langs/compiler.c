int main() 
{
    int rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);

    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; ++i)
    {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int** transposed_output_matrix = (int**)malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; ++i)
    {
        transposed_output_matrix[i] = (int*)malloc(rows * sizeof(int));
    }
    
    transpose_matrix(matrix, rows, cols, transposed_output_matrix);
    
    for (int i = 0; i < cols; ++i) 
    {
        for (int j = 0; j < rows; ++j)
        {
            printf("%d ", transposed_output_matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; ++i) 
    {
        free(matrix[i]);
    }
    free(matrix);

    for (int i = 0; i < cols; ++i) 
    {
        free(transposed_output_matrix[i]);
    }
    free(transposed_output_matrix);

    return 0;
}
