#include <bits/stdc++.h>
using namespace std;
/**
 * Set: It stores duplicate elements also
 * Display elements in the ascending order 
 * Uses Red Black Trees
 * 
 * Syntax: 
 * multiset<datatype/container, datatype> setName;
 * 
 * Methods:
 * insert() -> O(logn) 
 * find() -> O(logn)
 * erase() -> O(logn)
 * .begin() -> Returns an iterator pointing to the first element of the set
 * .end()  -> Returns an iterator pointing next to the last element of the set
 * .rbegin() -> Returns a reverse iterator pointing to the last element of the set
 * .rend() -> Returns a reverse iterator pointing before the first element of the set
 * size()
 */

template <typename T>
void print(T &s){
    for(auto it: s){
        cout<< it << endl;
    }
}

int main(){
    multiset<string> s;

    // Insertion
    s.insert("xyz");
    s.insert("def");
    s.insert("abc");
    s.insert("abc");

    // Find and Erase
    // auto it = s.find("abc");
    auto it = s.find("aslkdjf");
    if(it != s.end()){
        s.erase(it); // Accepts both It and values too
        // Only iterator which points to that element
    }

    s.erase("abc"); // Delete values which are presnt more than one time
 
    print(s);    
    return 0;
}