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

// Function to explain and demonstrate use of stack - it based on LIFO (LAST IN FIRST OUT). TIME PCOLPLEXITY - O(1) AND THE FUNCTION OF THIS IS - PUSH , POP , TOP , size , empty, swap


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
// all function of this is - push, pop, front, back 


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

// Function to explain and demonstrate use of PQ
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

    // NOTE - PUSH -logn , top- o(1) , pop - log(n)

    // minimum Heap
    priority_queue<int , vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2

}

// Function to explain and demonstrate use of set  container - sorted and unique

void explainSet() {

    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(4); //{1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    //Functionality of insert in vector 
    // can be used also , that only increases
    //efficient

    //begin(), end(), rbegin(), rend(), size()
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); //iterator return that point to the 3 

    // {1, 2, 3, 4, 5}
    auto it = st.find(6); // iterator returns st.end()

    // {1, 4, 5}
    st.erase(5); //erases 5 // takes logarithmic time
    
    int cnt = st.count(1); // if it occur it gives - 1 otherwise it gives you - 0

    auto it = st.find(3);
    st.erase(it);  //it takes constant time 

    //{1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); //after erase {1, 4, 5} [first, last]

    // lower_bound() and upper_bound() functions works in same way
    // as in vector docs 

    // This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3); 

    // note - time complexity - log(N)
}

//  Function to explain and demonstrate use of  multiset  container


void explainMultiSets() {
    // Everything is the same as set,
    // but multiset allows duplicate elements.

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    // This will erase all instances of '1'
    ms.erase(1); // {}

    // Insert again to demonstrate further operations
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    // Count how many 1's are in the multiset
    int count = ms.count(1); // count = 3

    // Erase only a single instance of '1'
    ms.erase(ms.find(1)); // {1, 1}

    // Erase a range: from first '1' to the second occurrence
    auto it1 = ms.find(1);
    auto it2 = next(it1, 2); // safer than ms.find(1) + 2
    ms.erase(it1, it2); // now ms is empty

    // All other functions are the same as in set
}


// Function to explain and demonstrate use of  unorderedset  container

void eplainUset(){
    unordered_set<int> st;
    // lower_bound and upper_bound not work
    // does not work , rest all function are same 
    // as above , it does not stores in any
    // particular order it has a better complexity
    // than set in most case, expect same when collsion happens 
    // time complexity - O(1) in worst case - O(N)
}

// function to explain and demonstrate use of  map  container
void explainMap() {
    map<int, int> mpp1;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    // Operations on mpp1
    mpp1[1] = 2;
    mpp1.emplace(3, 1);
    mpp1.insert({2, 4});

    // Operation on mpp3 (since it has pair<int, int> as key)
    mpp3[{2, 3}] = 10;

    // Proper representation of initializer list (if intended)
    map<int, int> temp = {
        {1, 2},
        {3, 4},
        {3, 1} // Key '3' duplicated; only last value (1) is stored
    };

    // Print key-value pairs in temp
    for (auto &it : temp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Access values from mpp1
    cout << mpp1[1] << endl; // Prints: 2
    cout << mpp1[5] << endl; // Key 5 not found, returns default 0 and inserts it

    // map stores key-value pairs, unlike set which stores only keys

    // Finding key 3 in mpp2 (map<int, pair<int, int>>)
    auto it2 = mpp2.find(3);
    if (it2 != mpp2.end()) {
        cout << it2->second.first << ", " << it2->second.second << endl;
    } else {
        cout << "Key 3 not found in mpp2." << endl;
    }

    // Demonstrate finding keys in mpp1
    auto it3 = mpp1.find(5); // Will point to key 5 (which now exists after mpp1[5])
    if (it3 != mpp1.end()) {
        cout << "mpp1[5] = " << it3->second << endl;
    }

    auto it4 = mpp1.find(3);
    if (it4 != mpp1.end()) {
        cout << "mpp1[3] = " << it4->second << endl;
    }

    // Demonstration of valid syntax for map operations complete
}

void explainMultimap(){
    // everything same as map, only it can store multiple keys.
    // only map[key] cannot be used 
}

void explainedUnorderedMap(){
    // same as set and Unordered_set difference.
}

// note - map worked in logN and unorderd map worked in O(1) in worst case o(N)


int main() {
    print();
    int s = sum(1, 3);
    cout << s << "\n";

    explainPair();
    explainVector();

    return 0;
}
