// Pairs: It is container in STL library
// It is used where there is relation between to inputs/data
#include <bits/stdc++.h>
using namespace std;

int main(){
    // Syntax: 
    /*
        pair <T1, T2> p;
        where,
        T1: Data type of the first element.
        T2: Data type of the second element.
        p: Name assigned to the pair.
    */

   // Declaration with initialization
    pair<int ,string> p = {1, "Faisal"};

    // Using make_pair()
    pair<int , string> p1 = make_pair(2, "Faizan");

    // Access pair value 
    cout<<p.first << ": " <<p.second <<endl;
    cout<<p1.first << ": " <<p1.second <<endl;

    // Reference 
    pair<int, string> &p2 = p;
    p2.first = 2;
    cout<<p.first << ": " <<p.second <<endl;    

    // Array of pairs 
    pair<int, string> pr[3];

    for(int i = 0; i<3; i++){
        cin>>  pr[i].first;
        cin>> pr[i].second;
    }

    for(int i = 0 ;i < 3 ;i++){
        cout<<pr[i].first <<": "<<pr[i].second <<endl;
    }

    return 0;
}