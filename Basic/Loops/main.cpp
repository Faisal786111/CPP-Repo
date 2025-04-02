// Sum of Digits
// You're given an integer N. Write a program to calculate the sum of all the digits of N.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
    }
    
    return 0;
}