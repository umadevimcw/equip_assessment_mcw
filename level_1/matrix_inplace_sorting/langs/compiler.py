def main():
    m = int(input())
    n = int(input())

    input_arr = [[0 for i in range(n)] for i in range(m)]
    invalid = False

    for i in range(m):
        num_elements_in_a_row = 0
        row = input()
        # Check if the string/row is empty
        if len(row) == 0:
            return
        tokens = row.split(' ')
        for j, val in enumerate(tokens):
            input_arr[i][j] = int(val)
            num_elements_in_a_row += 1

        # If any row has lesser/greater number of elements than n, the input is invalid
        if num_elements_in_a_row != n:
            invalid = True
            return

    # Check if the input is valid
    if invalid:
        print("You have entered an invalid input!")
        return

    sortMatrix(input_arr, m, n)
    # Print the sorted matrix
    for i in range(m):
        for j in range(n):
            print(input_arr[i][j], ' ', sep='', end='')
        print()

if __name__ == '__main__':
    main()