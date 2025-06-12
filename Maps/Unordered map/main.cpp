#include <bits/stdc++.h>
using namespace std;

// Questions :
/**
 * 1. Inbuilt implementation: uses Hash Table
 * 2. Time complexity
 * 3. Valid keys datatype -> primitive datatypes only bcoz their hash function is defined
 * Efficient in order to save time bcoz it uses hash table.
 * Disadvantage: It doesn't maintain any order.
 * */

template <typename T>
void print(T &m){
    cout<<"Size: " << m.size() << endl;
   for(auto &it: m){ // O(1)
        cout<< it.first <<" :"<<it.second << endl;
    } 
}

int main(){
    // Map Syntax: 
    // It is discontinue in nature 
    // unordered_map<datatype, datatype> map_name;
    
    // Methods:
    /*
        1. insert() -> O(1)
        2. find()   -> O(1)
        3. erase()  -> O(1)
        4. clear()  
        5. size 
        6. begin() -> starting address
        7. end() -> last to next address
    */

    // By Default Ordered Map 
    unordered_map<int, string> m;
    // Store in ascending order
    m[1] = "abc"; // O(1)
    m[5] = "cdc";
    m[3] = "acd";
    m[6]; // O(1)
    m.insert({2, "faisal"});
    m.insert({4, "faizan"});

    // find and erase 
    auto it = m.find(9); // returns iterator 
    if(it != m.end()){
        m.erase(it);
    }else{
        cout<< "Not present" << endl;
    }
    // if(it == m.end()){ // VNF(404)
    //     cout<<"404" << endl;
    // }else {
    //     cout<< it->first << " " << it->second<< endl;
    // }
    m.clear();
    print(m);

    // m["abc"] = "abc" // s.size() * logn


    // map<string, int> m1; 
    // // Store keys in lexigraphically
    // m1["zbc"] = 1;
    // m1["cdc"] = 5;
    // m1["acd"] = 3;

    // print(m1);

    return 0;
}