int main() {
    int N;
    scanf("%d",&N);
    char input[N];
    scanf("%s", input);
    int result = countDistinctSubstrings(input);
    printf("%d\n");
    return 0;
}