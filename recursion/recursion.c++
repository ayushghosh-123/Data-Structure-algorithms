// basic recursion problem 
#include <bits/stdc++.h>
using namespace std;


//  Tc - O(n) Sc-O(N)
// void numprint(int i, int n){
//     if(i > n){
//         return;
//     }
//     cout << i << " " << n << endl;
//     numprint(i+1, n);
// }


// print 1-N 
// void printnum(int i , int n){
//     if(i > n){
//         return;
//     }

//     cout << i << endl;
//     printnum(i+1, n);
// }

// void reversenum(int i, int n){
//     if(i < 1){
//         return;
//     }
//     cout << i;
//     reversenum(i-1, n);
// }

// 1-N using backtracking
// void backtracking(int i, int n){
//     if(i < 1){
//         return;
//     }

//     backtracking(i-1, n);
//     cout << i;
// }

// N-1 backtracking method
void backreversenum(int i, int n){
    if(i > n ){
        return;
    }
    backreversenum(i+1, n);
    cout << i << endl;
    
}

int main(){
    int n;
    cout << "enter the n value" << endl;
    cin >> n;

    // numprint(1, n);
    // printnum(1, n);

    // reversenum(n, n);
    backreversenum( 1 , n);

}