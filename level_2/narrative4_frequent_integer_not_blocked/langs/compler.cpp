int main() 
{
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>m;
    int b_arr[m];
    for(int i=0; i<m; i++)
        cin>>b_arr[i];
    
    cout<<frequent_integer_not_blocked(n, arr, m, b_arr);
    
    return 0;
}