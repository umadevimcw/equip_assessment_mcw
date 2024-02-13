int main() 
{ 
    int n;
    int sum = 0;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;++i)
        cin>>arr[i];
    
    cout<<average_price(n, arr);
    
    return 0;
}
