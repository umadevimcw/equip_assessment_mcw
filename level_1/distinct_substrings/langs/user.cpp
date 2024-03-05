#include <iostream>
#include <unordered_set>

using namespace std;

int countDistinctSubstrings(string s) {
    int n = s.length();
    unordered_set<string> substrings;

    for (int i = 0; i < n; i++) {
        string substring = "";
        for (int j = i; j < n; j++) {
            substring += s[j];
            substrings.insert(substring);
        }
    }

    return substrings.size();
}