#include <bits/stdc++.h>
using namespace std;

/**
 * lower_bound: 
 * Built-in C++ STL function hai jo iterator return karti hai pointing to **first element which is greater than or equal to (>=) given value.
 * Agar koi element nahi mila jo val se bada ya barabar ho, to end iterator return hota hai.
 *
 * Incase of array it returns ptr and incsae of vectors it returns iterator
 * 
 * Syntax: 
 * auto it = lower_bound(start, end, val);
 * 
 * Time complexity: O(logn)
 * 
 * upper_bound: 
 * Ye bhi STL ka built-in function hai jo iterator return karti hai pointing to first element which is strictly greater than (>) given value.

 * Agar koi element nahi mila jo val se strictly bada ho, to end iterator return hota hai.

 Incase of array it returns ptr and incsae of vectors it returns iterator

 * Syntax: 
 * auto it = upper_bound(start, end, val);
 * 
 * Time complexity: O(logn)
 */
 
int main(){
    vector<int> v = {1, 3, 5, 7}; // Vec is already sorted 

    // cout << *lower_bound(v.begin(), v.end(), 6) << endl; // >=

    // cout << *upper_bound(v.begin(), v.end(), 7) <<  endl; // > op: Garbage value
    // cout << *upper_bound(v.begin(), v.end(), 5) << endl; // op: 7.

    set<int> s = {1, 2, 3};

    cout << *lower_bound(s.begin(), s.end(), 4) << endl; // >=

    cout << *upper_bound(s.begin(), s.end(), 4) <<  endl; // > op: garbage value
    cout << *upper_bound(s.begin(), s.end(), 1) << endl; // op: 2
    return 0;
}