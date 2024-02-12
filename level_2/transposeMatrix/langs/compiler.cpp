int main() 
{
    int rows, cols;
    cin >> rows;
    cin >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i)
    {
        matrix[i] = new int[cols];
    }
    
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cin >> matrix[i][j];
        }
    }
    
    int** transposed_output_matrix = new int*[cols];
    for (int i=0; i < cols; ++i)
    {
        transposed_output_matrix[i] = new int[rows];
    }
    
    transposeMatrix(matrix, rows, cols,transposed_output_matrix);
    
    for (int i = 0; i < cols; ++i) 
    {
        for (int j = 0; j < rows; ++j)
        {
            cout << transposed_output_matrix[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < rows; ++i) 
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (int i = 0; i < cols; ++i) 
    {
        delete[] transposed_output_matrix[i];
    }
    delete[] transposed_output_matrix;

    return 0;
}
