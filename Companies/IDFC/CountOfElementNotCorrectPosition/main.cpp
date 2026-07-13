#include <bits/stdc++.h>
using namespace std; 


// Input: arr[] = {1, 2, 6, 2, 4, 5} 
// Output: 4 
// Array in the sorted form will be {1, 2, 2, 4, 5, 6}
// Input: arr[] = {1, 2, 3, 4} 
// Output: 0 
// All the elements are already sorted. 
 

int solve(vector<int> &arr) { 
    vector<int> copy = arr; 
    
    sort(copy.begin(), copy.end()); 
    
    int cnt = 0; 
    for(int i = 0; i < copy.size(); i++) {
        if(copy[i] != arr[i]) cnt++;
    }
    
    return cnt; 
}

int main()
{
    vector<int> arr = {1, 2, 6, 2, 4, 5};
    
    cout << solve(arr) << endl;
    return 0;
}
