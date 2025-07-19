#include <bits/stdc++.h>
using namespace std;

// int hashh[1000000]  -- for globaly you stored 10^7 number in int data types
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1; 
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        cout << "Count of " << number << ": " << hash[number] << endl;
    }
    return 0;
}