def main():
    m = int(input())
    set1 = []
    for i in range(m):
        key, value = map(int, input().split())
        set1.append([key, value])
    n = int(input())
    set2 = []
    for i in range(n):
        key, value = map(int, input().split())
        set2.append([key, value])

    result = aggregate_weights_by_value(m, set1, n, set2)

    for i in range(len(result)):
        print(result[i][0], result[i][1])
        
if __name__ == "__main__":
    main()