#include <stdio.h>
#include <bits/stdc++.h>

using namespace std; 

using vi = vector<int>; 

vi findHeights(vi &H) { 
    int n = H.size(); 
    
    vi ans(n, INT_MAX);
    
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) { 
            if(i == j) continue;
            int mx = 0; 
            for(int k = min(i, j) + 1; k < max(i, j); k++) { 
                mx = max(mx, H[k]);
                
                if(mx > max(H[i], H[j])) { 
                    ans[i] = min(ans[i], abs(j - i));
                }
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(ans[i] == INT_MAX) ans[i] = -1; 
    }
    
    return ans; 
}

int main()
{
    vi H = {1 ,2 ,1 ,4 ,2};
    
    vi ans = findHeights(H);
    
    for(auto x: ans) cout << x << " ";
    return 0;
}
