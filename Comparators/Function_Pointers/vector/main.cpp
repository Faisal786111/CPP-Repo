#include <bits/stdc++.h>
using namespace std;

/**
 * Sorting: 
 * It is a  built in function which is present in algorithm library;
 * Default sorting is done in ASC order;
 * Internally it uses quick sort to for sorting.
 * Time Complexity: O(nlogn)
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
using v = vector<int>;

void print(v &arr) {
    for(auto i: arr){
        cout << i << " ";
    }
    cout << endl;
}

// Function Pointers: Ascending order
bool myComparatorASC(int a, int b) {
    return a < b; // TRUE|FALSE
}

// Function Pointers: Descending order 
bool myComparatorDESC(int a, int b) {
    return a > b; // TRUE|FALSE
}

int main(){
    v arr = {10, 2, 1, 3, 0, 11, 5};

    cout << "Default Sort Function" << endl;
    sort(arr.begin(), arr.end()); // Default ASC;
    print(arr);

    cout << "Function pointers: ASC" << endl;
    sort(arr.begin(), arr.end(), myComparatorASC);
    print(arr);

    cout << "Function pointers: DESC" << endl;
    sort(arr.begin(), arr.end(), myComparatorDESC);
    print(arr);
    
    return 0;
}