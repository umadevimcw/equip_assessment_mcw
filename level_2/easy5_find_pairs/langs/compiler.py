def main():
  R = int(input())
  N = int(input())
  arr = list(map(int, input().split()))
  pairs = []

  find_pairs(arr,N, R, pairs)

  if not pairs:
     print("No such pair")
  else:
     print(pairs)


if __name__ == "__main__":
    main()