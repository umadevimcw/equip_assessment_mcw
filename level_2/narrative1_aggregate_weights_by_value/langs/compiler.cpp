int main() 
{
    int m, n;
    cin >> m;
    int set1[m][2];
    for (int i = 0; i < m; i++) 
    {
        cin >> set1[i][0];
        cin >> set1[i][1];
    }
    cin >> n;
    int set2[n][2];
    for (int i = 0; i < n; i++) 
    {
        cin >> set2[i][0];
        cin >> set2[i][1];
    }

    int resultSize;
    int** result = aggregate_weights_by_value(m, set1, n, set2, resultSize);

    for (int i = 0; i < resultSize; ++i)
        cout << result[i][0] << " " << result[i][1] << endl;


    return 0;
}
