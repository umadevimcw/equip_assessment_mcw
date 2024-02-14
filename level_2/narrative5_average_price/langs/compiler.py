def main():
    n = int(input())
    
    arr = list(map(int, input().strip().split()))
    
    print(average_price(n, arr))

if __name__ == "__main__":
    main()
