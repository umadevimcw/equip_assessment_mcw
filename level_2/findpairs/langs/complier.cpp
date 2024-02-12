int main() 
{
    int N, R;

  cin >> R;
    cin >> N;
    int arr[N];
    
    for (int i = 0; i < N; ++i) 
        cin >> arr[i];

    vector<pair<int, int>> pairs;
    findPairs(arr, N, R, pairs);

    if (pairs.empty()) 
    {
        cout << "No such pair" << endl;
    } 
    else 
    {
        for (const auto& pair : pairs) 
        {
            cout << "(" << pair.first << ", " << pair.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
