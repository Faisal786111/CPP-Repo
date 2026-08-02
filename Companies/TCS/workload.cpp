#include <bits/stdc++.h>
#include <iostream>

using namespace std; 

/**
 * 
 * workload distribution simulator for a distributed computing system ip: w = 20 op = 150 you need to design a RA that computes the minium total recursive splitting cost required to process given conditions: 1. each W can be split into two parts only if both resulting parts +ve integers 2. the cost of each split is the product of the two split parts (a*b) 3. you must continue splitting recursively until all parts are <= k. 4. If at any point W > MX_L , the program must throw an error where MX_L = 50 5. the total recursive cost is the sum of all split costs in the recursion tree
 * 
 * 
 * 
 */
int t[1001]; 
int solve(int w, int k) { 
    // BC 
    if(w <= k) return 0; // min cost 
    
    if(t[w] != -1) return t[w];
   
    int minCost = INT_MAX; 
    
    // splitting 
    for(int a = 1; a < w; a++) { 
        int b = w - a; 
        
        int currentCost = a * b; 
        
        int tempAns = currentCost + solve(a, k) + solve(b, k); 
        
        minCost = min(minCost, tempAns);
    }
    
    return t[w] = minCost; 
}

int main()
{
    int k = 2, W = 20; 
    
    memset(t, -1, sizeof(t)); 
    if(W > 50) {
        cout << "error"; 
        return 0; 
    }
    
    cout << solve(W, k) << endl;

    return 0;
}