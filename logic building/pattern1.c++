#include <bits/stdc++.h>
using namespace std;


// void print1(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


// void print2(int n){
//     for (int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// // }

// void print3(int n){
//     for (int i=0; i<n; i++){
//         for(int j=1; j<=i; j++){
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
// }

// void print4(int n){
//     for (int i=0; i<n; i++){
//         for(int j=1; j<=i; j++){
//             cout << i <<" ";
//         }
//         cout << endl;
//     }
// }

// void print5(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j < n - i + 1; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// make it pyramid
// void print6(int n) {
//     for(int i = 0; i < n; i++) {
//         // print spaces
//         for(int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         // print stars
//         for(int j = 0; j < 2 * i + 1; j++) {
//             cout << "*";
//         }

//         // newline after each row
//         cout << endl;
//     }
// }

// void print7(int n){
//     for(int i=0; i<n; i++){
//         // print space 
//             for(int j=0; j<i; j++){
//                 cout << " ";
//             }
//         // print stars
//             for(int j=0; j < 2*n-(2*i +1); j++){
//                 cout << "*";
//             }
//         // print space
//             for(int j=0; j<i; j++){
//                 cout << " ";
//             }
//         cout << endl;
//     }
// }

// void print8(int n){
//      for(int i = 0; i < n; i++) {
//         // print spaces
//         for(int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         // print stars
//         for(int j = 0; j < 2 * i + 1; j++) {
//             cout << "*";
//         }

//         // print space
//         for(int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }
//         // newline after each row
//         cout << endl;
//     }

//      for(int i=0; i<n; i++){
//         // print space 
//             for(int j=0; j<i; j++){
//                 cout << " ";
//             }
//         // print stars
//             for(int j=0; j < 2*n-(2*i +1); j++){
//                 cout << "*";
//             }
//         // print space
//             for(int j=0; j<i; j++){
//                 cout << " ";
//             }
//         cout << endl;
//     }
// }

// void print9(int n) {
//     for(int i = 1; i <= 2*n - 1; i++) {
//         int star = i;
//         if(i > n) star = 2*n - i;
//         for(int j = 1; j <= star; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }




int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print9(n);
    }
    return 0;
}
