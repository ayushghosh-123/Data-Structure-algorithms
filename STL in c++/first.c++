#include <bits/stdc++.h>
using namespace std;

// Function to print a message
void print() {
    cout << "manov\n";
}

// Function to return the sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Function to explain and demonstrate use of pairs
void explainPair() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << "\n";

    pair<int, pair<int, int>> x = {1, {3, 4}};
    cout << x.first << " " << x.second.second << " " << x.second.first << "\n";

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << "\n";
}

// Function to explain and demonstrate use of vectors
void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100);      // vector with 5 elements all 100
    vector<int> v2(5);           // vector with 5 elements default initialized (0)
    vector<int> v3(5, 20);       // vector with 5 elements all 20
    vector<int> v4(v3);          // copy vector

    vector<int>::iterator it = v1.begin();
    it++;
    cout << *(it) << "\n";

    vector<int>::iterator it_end = v1.end();        // one past the last element
    vector<int>::reverse_iterator it_rend = v1.rend();  // reverse end
    vector<int>::reverse_iterator it_rbegin = v1.rbegin();  // reverse begin


    cout << v1[0] << " " << v1.at(0);
    cout << v1.back() << " ";

    for(vector<int>:: iterator it = v.begin(); it != v.end() ; it ++){
        cout << *(it) << " ";  
    }

    // auto iteratin
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    for(auto it : v){
        cout << it << " ";
    }


    // erase any vector
    v.erase(v.begin() + 1);
    // {10, 20 , 12, 23, 35}
    v.erase(v.begin()+2 , v.begin()+4);  //{10, 20, 35}
    

    // Inert function
    vector<int>v5(2, 100); //{100, 100}
    v5.insert(v5.begin(), 300); //{300, 100, 100}
    v5.insert(v5.begin()+1,2, 10 ); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);//{50, 50}
    v5.insert(v5.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    //{10, 20}
    cout << v.size();  // 2

    //{10, 20}
    v.pop_back(); // {10
    

    //v1 -> {10, 20}
    //v2 -> {30, 40}

    v1.swap(v2); // v1 -> {30, 40} , v2 -> {10, 20}

    v1.clear(); // erase entire value

    cout << v.empty(); 

    // Example usage
    if (it_rbegin != it_rend) {
        cout << *(it_rbegin) << "\n";
    }
}


// Function to explain and demonstrate use of list - it is dynamic in natures
void explaniList(){
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2, 4}

    ls.push_front(5); // {5, 2, 4} push_font - is very good in time coplexity meserment as per as insert
    ls.emplace_front(); // {2, 4}
    
    //rest function same as vector
    // begin, end, rbegin, rend, clear, inssert, size , swap 
}

// Function to explain and demonstrate us of deque - DYNAMIC IN NATURE 
void explainDeque(){
    deque<int>dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); //{3, 4, 1, 2}

    dq.pop_back(); //{3, 4, 1}
    dq.pop_front(); //{4, 1}

    dq.back();
    dq.front(); 
    
    //rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

}

// Function to explain and demonstrate use of stack - it based on LIFO (LAST IN FIRST OUT). TIME PCOLPLEXITY - O(1) AND THE FUNCTION OF THIS IS - PUSH , POP , TOP 
void explainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); //{2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); //print 5 "** st[2] is invalid "

    st.pop(); // st looks like {3, 3, 2, 1}

    cout << st.top(); // 3
    cout << st.size(); // 4

    cout << st.empty(); //false

    stack<int>st1, st2;
    st1.swap(st2);

}

// Function to explain and demonstrate use of QUEUE - ITS BASED ON FIFO ALGORITH time complixity as same as queue
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4); // {1, 2, 4}

    q.back() += 5;
    cout << q.back(); //print 9

    cout << q.front(); // print 1

    q.pop(); // {2, 9}

    cout << q.front(); // print 2
    
}

void explainPq(){
    priority_queue<int> pq;

    pq.push(5); //{5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}


    cout << pq.top(); // print 10

    pq.pop();
    cout << pq.top(); // print 8

    // size swap empty function same as others

    // minimum Heap
}


int main() {
    print();
    int s = sum(1, 3);
    cout << s << "\n";

    explainPair();
    explainVector();

    return 0;
}
