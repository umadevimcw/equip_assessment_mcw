int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    char str[32];
    find_unique_array(arr, n, str);
    printf("%s", str);
    free(arr);
    return 0;
}
