#include <bits/stdc++.h>
using namespace std;

/**
 * Sorting: 
 * It is a  built in function which is present in algorithm library;
 * Default sorting is done in ASC order;
 * Internally it uses quick sort to for sorting.
 * Time complexity: O(nlogn)
 * 
 * Syntax: 
 * sort(arr.begin(), arr.end(), comparator);
 * 
 * Ascending : nlogn 
 * Descending: nlogn
 * 
 * Comparator: 
 * Approach: Function Pointers -> It is a function that implements the logic of comparision.
 */

// Aliases
using p = pair<int, int>;
using vp = vector<p>; 


void print(vp &myPair) {
    for(auto i: myPair) {
        cout << i.first << " , " << i.second << " : ";
    }
    cout << endl;
}

bool myComparatorASC(p &p1, p &p2) {
    return p1 < p2;
}

bool myComparatorDESC(p &p1, p &p2) {
    return p1 > p2;
}

int main(){
    vp myPair = {{2, 4}, {2, 3}, {1, 2}};

    // cout << "Default Sort Function" << endl;
    // sort(myPair.begin(), myPair.end()); // Default ASC;
    // print(myPair);

    cout << "Function pointers: ASC" << endl;
    sort(myPair.begin(), myPair.end(), myComparatorASC);
    print(myPair);

    cout << "Function pointers: DESC" << endl;
    sort(myPair.begin(), myPair.end(), myComparatorDESC);
    print(myPair);
    
    return 0;
}