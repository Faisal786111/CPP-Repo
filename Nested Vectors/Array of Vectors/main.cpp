#include <bits/stdc++.h>
using namespace std;

int main(){
    // Array of vectors

    // Fixed no of rows and Variable no columns
    int N = 3;
    vector<int> v[N];

    for(int i = 0 ;i < N; i++){
        int n;
        cin>>n;
        for(int j = 0 ; j<n; j++){
            int x;
            cin >>x;
            v[i].push_back(x);
        }
    }

    for(int i = 0 ;i < N; i++){
        for(int j = 0 ; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}