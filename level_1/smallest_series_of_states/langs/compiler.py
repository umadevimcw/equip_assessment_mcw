def main():
    target = int(input())
    n = int(input())
    s = input()
    factors = []
    ans = []
    invalid = False

    num_elements_in_a_row = 0
    if s == "":
        invalid = True
    factors = list(map(int, s.split()))
    num_elements_in_a_row = len(factors)

    if num_elements_in_a_row != n or invalid:
        print("\nYou have entered an invalid input!")
    else:
        ans = lexicographically_smallest(target, factors)
        for i in ans:
            print(i, end=" ")

if __name__ == '__main__':
    main()