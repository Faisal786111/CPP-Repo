#include <bits/stdc++.h>
using namespace std;

/**
 * Given an array of strings, remove each string that is an anagram of an earlier string, then return the remaining array in sorted order.

Example

str = ['code', 'doce', 'ecod', 'framer', 'frame']

code and doce are anagrams. Remove doce from the array and keep the first occurrence code in the array.

code and ecod are anagrams. Remove ecod from the array and keep the first occurrence code in the array.

code and framer are not anagrams. Keep both strings in the array.

framer and frame are not anagrams due to the extra r in framer. Keep both strings in the array.

Order the remaining strings in ascending order: ['code','frame','framer'].
 */

// Cpp reference to avoid expensive operation
vector<string> removeAnagrams(vector<string> &strs){
    unordered_set<string> seen;
    vector<string> result;

    for(auto &s: strs){
        string sorted_s = s;

        sort(sorted_s.begin(), sorted_s.end());

        if(seen.find(sorted_s) == seen.end()){
            seen.insert(sorted_s);
            result.push_back(s);
        }
    }
    return result;
}

template <typename T>
void print(T &s){
    for(auto it: s){
        cout<< it << endl;
    }
}

int main(){
    int N;
    cin>>N;
    vector<string> strs;

    for(int i = 0; i < N; i++){
        string s;
        cin>> s;
        strs.push_back(s);
    }

    strs = removeAnagrams(strs);
    print(strs);

    return 0;
}