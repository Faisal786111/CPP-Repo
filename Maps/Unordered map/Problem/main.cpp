/**
 * Given N strings and Q queries.
 * In each query you are given a string print frequency N <= 10^5
 * |S| <= 100
 *  Q <= 10 ^ 6
 */

#include <bits/stdc++.h>
using namespace std;

// Time Complexity -> O(n + q)
int main(){
    int N;
    cin>>N;

    // for no : 
    // map<int, int> m;

    // for string :
    unordered_map<string, int>  m;

    for(int i = 0 ;i < N ;i++){
        string s;
        cin>> s;
        m[s]++;
    }
    int q;
    cin>> q;

    while(q--){
        string s;
        cin>> s;
        cout<< m[s] << endl;
    }

    return 0;
}