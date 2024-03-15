int main() {
    int N;
    scanf("%d",&N);
    char input[N];
    scanf("%s", input);
    int result = countDistinctSubsequence(input, N);
    printf("%d\n", result);
    return 0;
}