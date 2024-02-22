int main() 
{
    int n; 
    scanf("%d", &n);
    
    int arr[n]; 
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    int m; 
    scanf("%d", &m);
    
    int b_arr[m]; 
    for (int i = 0; i < m; i++) 
        scanf("%d", &b_arr[i]);
    
    printf( "%d\n", frequent_integer_not_blocked(n,arr, m, b_arr));
    
    return 0;
}