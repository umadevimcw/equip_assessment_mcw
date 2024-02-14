def main():
    n = int(input())
    names = list(map(str, input().split()))
    weights = list(map(int, input().split()))

    sorted_names = sort_names_by_weight(n, names, weights)

    print(*sorted_names)

if __name__ == "__main__":
    main()