int main() 
{
    int n;
    cin >> n;

    string names[n];
    int weights[n];

    for (int i = 0; i < n; i++)
        std::cin >> names[i];

    for (int i = 0; i < n; i++)
        cin >> weights[i];

    string* sortedNames = sortNamesByWeight(n, names, weights);

    for (int i = 0; i < n; i++)
        cout << sortedNames[i] << " ";
        
    delete[] sortedNames;

    return 0;
}
