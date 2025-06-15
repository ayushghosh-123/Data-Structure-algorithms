#include <bits/stdc++.h>
using namespace std;

int main(){
    int daynum;
    cin >> daynum;

    switch(daynum){
        case 1:
            cout << "Monday";
            break;
        case 2: 
            cout << "Tuesday";
            break;
        case 3:
            cout << "wednestday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "saturday";
            break;
        case 7:
            cout << "sunday";
            break;
        default:
            cout << "not matched";
            break;
        cout << "all out";
    }

    return 0;
}