#include <bits/stdc++.h>
using namespace std;

void f(int i, int arr[], int n) {
    if (i >= n / 2) return;
    swap(arr[i], arr[n - 1 - i]); // Fix index: swap i with n-1-i
    f(i + 1, arr, n);
}

int main() {
    int n;
    cout << "Enter the n value: " << endl;
    cin >> n;

    int arr[n]; // Now n is initialized, so array can be declared

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) cin >> arr[i];

    f(0, arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
