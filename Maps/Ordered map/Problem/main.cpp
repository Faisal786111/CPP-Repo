/**
 * Given N strings, print unique strings in lexiographical order with their frequency N <= 10^5
 * |S| <= 100
 */

#include <bits/stdc++.h>
using namespace std;

// Time Complexity -> O(NlogN)
int main(){
    int N;
    cin>>N;

    // for no : 
    // map<int, int> m;

    // for string :
    map<string, int>  m;

    for(int i = 0 ;i < N ;i++){
        string s;
        cin>> s;
        m[s]++;
    }

    for(auto &it: m){
        cout<<it.first << ": "<< it.second << endl;
    }
    return 0;
}