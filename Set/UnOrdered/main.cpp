#include <bits/stdc++.h>
using namespace std;

/**
 * Set: It stores unique elements 
 * Doesn't Display elements in the ascending order 
 * Uses HashTable
 * Used when order doesn't only the check that value is present or not bcoz time complexity of searching is O(1)
 * 
 * Syntax: 
 * unordered_set<datatype/container, datatype> setName;
 * 
 * Methods:
 * insert() -> O(1) 
 * find() -> O(1)
 * erase() -> O(1)
 * begin()
 * end()
 * size()
 */

template <typename T>
void print(T &s){
    for(auto it: s){
        cout<< it << endl;
    }
}


int main(){
    unordered_set<string> s;

    // Insertion
    s.insert("xyz");
    s.insert("def");
    s.insert("abc");
    s.insert("abc");

    // Find and Erase
    // auto it = s.find("def");
    auto it = s.find("aslkdjf");
    if(it != s.end()){
        s.erase(it); // Accepts both It and values too
    }

    print(s);

    return 0;
}