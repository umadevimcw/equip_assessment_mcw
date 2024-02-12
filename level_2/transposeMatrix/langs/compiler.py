def main():
    rows = int(input())
    cols = int(input())

    matrix = [[0 for _ in range(cols)] for _ in range(rows)]
    for i in range(rows):
        row_values = list(map(int, input().split()))
        matrix[i] = row_values

    transposed_output_matrix = [[0 for _ in range(rows)] for _ in range(cols)]

    transpose_matrix(matrix, rows, cols, transposed_output_matrix)

    for i in range(cols):
        for j in range(rows):
            print(transposed_output_matrix[i][j], end=" ")
        print()

if __name__ == "__main__":
    main()
