if __name__ == "__main__":
    n = int(input())
    arr = [int(input()) for _ in range(n)]
    result_holder = [None] 
    find_unique_array(arr, n, result_holder)
    print(result_holder[0])