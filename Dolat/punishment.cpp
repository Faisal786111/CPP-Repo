#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std; 

using vi = vector<int>; 

/**
 * in 1 2 3 4 5 out 1 4 5 2 3 
 * punish ppl who overtook others count numer of punishments 4 and 5 are punished
 */

int main()
{
    vi in = {1, 2, 3, 4, 5};
    vi out = {1, 4, 5, 2, 3};
    int n = out.size(); 
    
    unordered_map<int, int> m; // element with entry orders 
    
    for(int i = 0; i < in.size(); i++) { 
        m[in[i]] = i;    
    }
    
    vi outOrder(n, 0); 
    
    for(int i = 0; i < n; i++) {
        outOrder[i] = m[out[i]];
    }
    
    int cnt = 0; 
    
    for(int i = 0; i < n - 1; i++) { 
        for(int j = i + 1; j < n; j++) { 
            if(outOrder[i] > outOrder[j]) {
                cnt++; 
                break;
            } 
        }
    }
    
    cout << cnt; 
    
    
    return 0;
}