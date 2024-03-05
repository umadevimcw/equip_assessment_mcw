int main() {
    int N;
    cin >> N;
    
    string input;
    cin >> input;

    int result = countDistinctSubstrings(input);

    cout << result << endl;

    return 0;
}