/**
 * Given N strings, print unique strings in lexigrophical order 
 * N <= 10^5
 * |S| = 100000
 * So, Here it only require ordering and doesn't care about frequency, Set is the best option
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

// Time Complexity : O(NlogN)
int main(){
    int N;
    cin>> N;

    set<string> s;

    for(int i = 0 ;i < N ;i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    cout<< "Display : "<< endl;
    print(s);
    return 0;
}

