#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int hash[26] = {0};
    // int hash[256] = {0};

    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++; // ✅ FIXED: s(i) → s[i], added semicolon
        // hash[s[i]]++; // ✅ for 256 character
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
        // cout << hash[c] << endl;
    }

    return 0;
}
