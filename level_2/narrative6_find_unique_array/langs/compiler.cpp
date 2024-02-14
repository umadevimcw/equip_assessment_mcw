int main()
{
    int n;
    string str;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    
    find_unique_array(arr, n, &str);
    
    cout<<str;
    
    return 0;
}
