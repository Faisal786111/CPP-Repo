#include <bits/stdc++.h>
using namespace std; 

/*
Given a range of numbers X, Y you had to find the sum of all golden numbers. A golden number would
be defined such that the sum of its digits - maximum digit out of all digits is equal to the maximum digit.
(eg: 3003: sum = 6, max_digit = 3, sum - max_digit = 3).
*/

bool isGolden(int num) { 
    int sum = 0, mxDigit = 0; 
    
    int n = num; 
    
    while(n > 0) { 
        int d = n % 10; 
        
        sum += d; 
        mxDigit = max(d, mxDigit); 
        
        n /= 10; 
    }
    
    return sum == 2 * mxDigit;
}

int main()
{
    int x, y; 
    
    cin >> x >> y; 
    
    int totalSum = 0; 
    
    for(int i = x; i <= y; i++) { 
        if(isGolden(i)) totalSum += i; 
    }
    
    cout << totalSum << endl;
    return 0;
}
