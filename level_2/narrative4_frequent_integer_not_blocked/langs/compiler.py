def main():
    n = int(input())
    arr = list(map(int, input().split()))
    m = int(input())
    b_arr = list(map(int, input().split()))
    print(frequent_integer_not_blocked(n, arr, m, b_arr))

if __name__ == "__main__":
    main()