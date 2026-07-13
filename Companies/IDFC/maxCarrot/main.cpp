#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

using vi = vector<int>; 
using vvi = vector<vi>; 

/*
    Direction: Down, Right 
    
    IP: Mat containing some carrots 
    
    OP: Max carrot
*/

vvi t; 

int solve(int i, int j, int m, int n, vvi &mat) { 
    // BC 
    if(i >= m || j >= n) return INT_MIN + 1;
    
    if(i == m - 1 && j == n - 1) return mat[i][j]; 
    
    if(t[i][j] != -1) return t[i][j]; 
    
    // Hypothesis
    int down = solve(i + 1, j, m, n, mat);
    int right = solve(i, j + 1, m, n, mat); 
    
    
    // Induction 
    return t[i][j] = mat[i][j] + max(down, right);
}

int maxCarrot(vvi &mat) { 
    int m = mat.size(); 
    int n = mat[0].size(); 
    
    t.assign(m + 1, vi(n + 1, -1)); 
    
    return solve(0, 0, m, n, mat);
}

int main()
{
    vvi mat = {
        {1, 2, 3},    
        {4, 5, 6},    
        {7, 8, 9},    
    };
    
    cout << maxCarrot(mat) << endl;
    return 0;
}