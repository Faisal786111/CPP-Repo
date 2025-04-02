/*
Given rectangle of length l and b. Print area of rectangle.

Constraints:
1 <= l <= 10^9
1 <= b <= 10^9

Input format:
2 space separated integer l an b

Output Format
Single number which is area of rectangle

Sample input:
3 4

Sample output:
12
*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    long long l, b;
    cin >> l >> b;

    cout << l*b;
    return 0;
}