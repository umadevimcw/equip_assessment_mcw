public static void main(String[] args) 
{
    Scanner scanner = new Scanner(System.in);
    int rows = scanner.nextInt();
    int cols = scanner.nextInt();
    int[][] matrix = new int[rows][cols];
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
        {
            matrix[i][j] = scanner.nextInt();
        }
    }
    
    int[][] transposed_output_matrix = new int[cols][rows];
    transpose_matrix(matrix, rows, cols, transposed_output_matrix);
    
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) 
        {
            System.out.print(transposed_output_matrix[i][j] + " ");
        }
        System.out.println();
    }
    
    scanner.close();
}

