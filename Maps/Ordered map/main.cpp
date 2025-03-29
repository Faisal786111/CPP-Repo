#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print(T &m){
    cout<<"Size: " << m.size() << endl;
   for(auto &it: m){ // O(nlogn)
        cout<< it.first <<" :"<<it.second << endl;
    } 
}

int main(){
    // Map Syntax: 
    // It is discontinue in nature 
    // map<datatype, datatype> map_name;
    
    // Methods:
    /*
        1. insert()
        2. find()
        3. erase()
        4. clear()
        5. size
        6. begin() -> starting address
        7. end() -> last to next address
    */

    // By Default Ordered Map 
    map<int, string> m;
    // Store in ascending order
    m[1] = "abc"; // O(logn)
    m[5] = "cdc";
    m[3] = "acd";
    m[6]; // O(logn)
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