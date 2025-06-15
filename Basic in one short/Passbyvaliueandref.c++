#include <bits/stdc++.h>
using namespace std;

// pass by value - copy goes not goes the original value 
// void dosomething(int num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// pass by referencs - addres of the original value
void dosomething(int arr[] ,int n){
    // cout << num << endl;
    // num += 5;
    // cout << num << endl;
    // num += 5;
    // cout << num << endl;

    arr[0] +=100;
    cout << "value inside function: " << arr[0] << endl; 
}

int main(){
    int var = 5;
    int arr[var];
    for(int i = 0; i<var; i++){
        cin >> arr[i];
    }
    dosomething(arr, var);

    cout << "value inside int main: " << arr[0] << endl; 
    return 0; 
}

// note :- array alway pass by reference 