int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);
        
    printf("%d", average_price(n, arr));
    free(arr);
    return 0;
}
