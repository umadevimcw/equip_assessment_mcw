int main() {
    int N;
    cin >> N;
    
    string input;
    cin >> input;

    int result = countDistinctSubsequence(input, N);

    cout << result << endl;

    return 0;
}