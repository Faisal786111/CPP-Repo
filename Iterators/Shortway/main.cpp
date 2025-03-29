#include <bits/stdc++.h>
using namespace std;

int main(){
    // Cpp 11 version introduced short way to write iterators 

    // Range based loop (for each loop)
    vector<int> v = {10, 20, 30, 40, 50};

    // Normal loop
    for(int i = 0 ;i < v.size(); i++){
        cout<<v[i] << " ";
    }
    cout<<endl;

    // For each loop : cpp reference (&)
    for(int &no : v){
        //cout<<no <<" ";
        no++;
    }
    cout<<endl;
    for(int no : v){
        cout<<no <<" ";
    } 
    cout<<endl;

    // Auto keyword
    for(auto no: v){
        cout<<no <<" ";
    }
    cout<<endl;

    // Iterators to pair
    vector<pair<int,int>> p = {{10,20} , {30,40} , {50,60}};
    
    for(auto it = p.begin(); it!=p.end(); it++){
        cout<<it->first << ": " << it->second<< endl;
    }

    // The range-based loop automatically iterates through all elements without manually managing begin() and end()
    for(auto it : p){
        cout<<it.first << ": " << it.second<< endl;
    }

    return 0;
}