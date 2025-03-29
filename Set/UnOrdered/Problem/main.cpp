/**
 * Given N strings and Q queries.
 * In each query you are given a string print yes if string is present else print no.
 * 
 * N <= 10^6
 * |S| <= 100
 * Q <= 10 ^ 6
 */

#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print(T &s){
    cout<< s.size() << endl;
    for(auto it: s){
        cout<< it << endl;
    }
}

// Time Complexity : O(N * Q)
int main(){
    int N;
    cin>> N;

    unordered_set<string> s;

    for(int i = 0 ;i < N ;i++){
        string str;
        cin >> str;
        s.insert(str);
    }

    int q;
    cin >> q;
    while(q--){
        string str; 
        cin >> str;
        if(s.find(str) != s.end()){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}

