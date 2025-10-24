#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    if (s.empty()) return false;
    int balance = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') balance++;
        else balance--;
        if (balance == 0 && i != s.size() - 1)
            return false;  // became balanced before end → breakable
    }
    return (balance == 0); // fully balanced only at end → unbreakable
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (check(s))
            cout << "NO\n";  // can't break it
        else
            cout << "YES\n"; // can break it
    }
    return 0;
}
