#include <bits/stdc++.h>
using namespace std;

int main(){
    // int age;
    // cin >> age;
    // if(age >= 18){
    //     cout << "you are an adult";
    // }
    // else if(age < 18 ){
    //     cout << "you are not an adult! ";
    // }

    // int marks ;
    // cin >> marks;
    // if(marks < 25){
    //     cout << "F";
    // }
    // else if (marks >= 25 && marks <= 44){
    //     cout << "E";
    // }
    // else if(marks >= 45 && marks <=49){
    //     cout << "D";
    // }
    // else if(marks >= 50 && marks <= 59){
    //      cout << "C";
    // }
    // else if(marks >=60 && marks <= 79){
    //     cout << "B";
    // }
    // else if(marks >= 80 && marks <= 100 ){
    //     cout << "A";
    // }


    // nested else-if
    int age ;
    cin >> age;
    if(age < 18){
        cout << "not eligible for job";
    }
    else if(age <=54){
        cout << "eligible for job";
        if( age >= 55){
            cout << "but retirement soon";
        }
    }
    else{
        cout << "retirement true";
    }
    return 0;
}
