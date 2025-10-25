#include <bits/stdc++.h>
using namespace std;

long long solve(string& s, char c) {
    vector<int> pos;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) pos.push_back(i);
    }
    
    if (pos.empty()) return 0;
    
    int mid = pos.size() / 2;
    long long cost = 0;
    for (int i = 0; i < pos.size(); i++) {
        cost += abs(pos[i] - (pos[mid] - mid + i));
    }
    return cost;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        cout << min(solve(s, 'a'), solve(s, 'b')) << "\n";
    }
    
    return 0;
}