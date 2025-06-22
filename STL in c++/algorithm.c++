#include <bits/stdc++.h>
using namespace std;

// for algorithm

bool comp(pair<int, int>p1, pair<int, int>p2){

    // pale second value compare karen ga
    if(p1.second < p2.second) return true;
    if(p2.second > p2.second) return false;

    // they are same
    if(p1.first > p2.first) return true; // uska bad first value compare karenga
    else return false;
}


void explainExtra() {
    // Initialize an array properly before using sort
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);

    vector<int> v = {1, 2, 3, 4};
    
    // Sorting array and vector
    sort(a, a + n);
    sort(v.begin(), v.end());

    // Sorting a specific range in the array
    sort(a + 2, a + 4); // Sorts from index 2 to 3 (not including index 4)

    // Sorting in descending order using greater<>
    int x[] = {5, 3, 8, 1, 9};
    int s = sizeof(x) / sizeof(x[0]);
    sort(x, x + s, greater<int>());

    // Sorting array of pairs using custom comparator
    pair<int, int> m[] = {{1, 2}, {2, 1}, {4, 1}};
    int pairSize = sizeof(m) / sizeof(m[0]);
    sort(m, m + pairSize, comp);

    // Built-in popcount
    int num = 7;
    int cnt = __builtin_popcount(num); // Corrected function and added argument
    cout << "Number of set bits in " << num << " = " << cnt << endl; //it gave the bits in 7 = 3 

    long long num = 1234567895642;
    int cnt = __builtin_popcountll(num);

     string word = "1356";
    sort(word.begin(), word.end()); // at firt sot buy you 

    do {
        cout << word << endl;
    } while (next_permutation(word.begin(), word.end()));

    // {1, 10, 5, 6}
    int maxi = *max_element(a, a+n);  // a , a+n - gives the range of the that you find the macximum no in that side
    
}