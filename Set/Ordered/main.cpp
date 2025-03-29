#include <bits/stdc++.h>
using namespace std;

/**
 * Set: It stores unique elements 
 * Display elements in the ascending order 
 * Uses Red Black Trees
 * 
 * Syntax: 
 * set<datatype/container, datatype> setName;
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
    set<string> s;

    // Insertion
    s.insert("def");
    s.insert("xyz");
    s.insert("abc");
    s.insert("abc");

    // Find and Erase
    // auto it = s.find("def");
    auto it = s.find("aslkdjf");
    if(it != s.end()){
        s.erase(it); // Accepts both It and values too
    }

    print(s);

    // Display in reverse form 
    cout<< "Display in Reverse form: "<<endl;
    for(auto it = s.rbegin(); it != s.rend() ; it++){
        cout<< (*it) << endl;
    }

    return 0;
}