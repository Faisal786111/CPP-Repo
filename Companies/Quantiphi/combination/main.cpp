#include <stdio.h>
#include <bits/stdc++.h>
using namespace std; 

int factorial(int n) { 
    if(n == 0 || n == 1) return 1; 
    
    return n * factorial(n - 1); 
}

int main()
{
    string s = "banana";
    int k = 2; 
    
    // Remove all the duplicates from the s 
    set<char> st;
    
    for(auto x: s) st.insert(x); 
    
    string unique(st.begin(), st.end());
    
    // n!/r!(n - r)! here r is k 
    int n = st.size(); 
    
    int ans = factorial(n) / (factorial(k) * factorial(n - k));
    
    cout << ans << endl;
    
    
    return 0;
}