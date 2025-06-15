#include <bits/stdc++.h>
using namespace std;

// function are set of code which performs something for you 
// function are used to modularies code 
// function are used to increase readibility
// function are used to use same code multiple times 
// void -> which dosen't return anything
// return
// parameterised
// non paramitarised


// two number and print it sum
void printName(string name){
    cout << "my name is: "<< name;
}

void sum (int num1 , int num2){
    int num3 = num1 + num2;
    cout << "the sum of two number: " << num3;
}

int main (){
    // string name ;
    // cin >> name;
    // printName(name);

    // string name2;
    // cin >> name2;
    // printName(name2);

    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2);
    return 0;
}