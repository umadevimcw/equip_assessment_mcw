int main()
{
    int m, n;
    scanf("%d", &m);
    int set1[m][2];
    for (int i = 0; i < m; i++) 
    {
        scanf("%d", &set1[i][0]);
        scanf("%d", &set1[i][1]);
    }
    scanf("%d", &n);
    int set2[n][2];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &set2[i][0]);
        scanf("%d", &set2[i][1]);
    }

    int resultSize;
    int** result = aggregate_weights_by_value(m, set1, n, set2, &resultSize);

    for (int i = 0; i < resultSize; ++i)
        printf("%d %d\n", result[i][0], result[i][1]);

    for (int i = 0; i < resultSize; ++i)
        free(result[i]);
    free(result);

    return 0;
}