#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std; 

using vi = vector<int>; 

/**
 * in 1 2 3 4 5 out 1 4 5 2 3 
 * punish ppl who overtook others count numer of punishments 4, 5 and 3 are punished
 */

int main()
{
     vi in = {1, 2, 3, 4, 5};
    vi out = {1, 4, 5, 2, 3};
    int n = out.size(); 
    
    // entrey order store 
    unordered_map<int, int> m; 
    
    for(int i = 0; i < n; i++) m[in[i]] = i; 
    
    // replace out element with it's entry order 
    vector<int> outOrder(n, 0);
    
    for(int i = 0; i < n; i++) { 
        outOrder[i] = m[out[i]];
    }
    
    // we need to find the person who overtook the other person 
    int cnt = 0; 
    
    for(int i = 0; i < n - 1; i++) { 
        for(int j = i + 1; j < n; j++) { 
            if(outOrder[i] < outOrder[j]) {
                cnt++; 
                break;
            }
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}