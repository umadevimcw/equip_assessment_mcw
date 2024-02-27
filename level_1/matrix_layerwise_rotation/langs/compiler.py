def main():
    m = int(input())
    n = int(input())

    input_mat = [[0 for i in range(n)] for i in range(m)]
    invalid = False

    for i in range(m):
        num_elements_in_a_row = 0
        row = input()
        tokens = row.split(' ')
        for j, val in enumerate(tokens):
            input_mat[i][j] = int(val)
            num_elements_in_a_row += 1

        # If any row has lesser/greater number of elements than n, the input is invalid
        if num_elements_in_a_row != n:
            invalid = True
            return

    # Check if the input is valid
    if invalid:
        print("You have entered an invalid input!")
        return

    output_mat = layerwise_rotate(input_mat)
    # Print the sorted matrix
    for i in range(n):
        for j in range(m):
            print(output_mat[i][j], end=' ')
        print()

if __name__ == '__main__':
    main()