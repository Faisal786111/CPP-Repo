#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

int smallestNumber(int x, int y) {
    if(x % y == 0) return x; 
    
    string s = to_string(x); 
   
    for(int i =0; ; i++) { 
        string num = s + to_string(i); 
        
        int val = stoi(num); 
        
        if(val % y == 0) return val;
    }
    
    return -1; 
}

int main()
{
    cout << smallestNumber(33, 11) << endl;
    return 0;
}