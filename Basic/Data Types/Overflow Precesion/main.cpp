#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Clac order in Datatype: 
    // char -> int -> float -> double 
    cout << 7 / 2 << endl;
    cout << 7 / 2.0 << endl;

    double a = 3/2; // output 1 bcoz deno. int
    double b = 3/2.0; // output 1.5 bcoz deno. float
    cout << a << endl;

    // Overflow: 
    // int, char, long int, long long int, float, double

    // -10^9 < int < 10^9
    // -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18

    // int min = INT_MIN , max = INT_MAX;

    // cout << min << max << endl;

    // long long int c = 100000;
    // long long int d = 100000;

    // long long int f = c * d;
    // long long int f = c * 1LL * d;
    // cout<< f << endl;

    // Double: 
    // Don't use double DT for calculation bcoz it will store large no. but not accurately.

    double c = 100000;
    double d = 100000;

    double f = c * d;
    f = 1e24; // 10^24
    // Fixed keyword is used to remove scientific notation (e);

    // Setprecision is used to move all zeros after point.
    cout << fixed << setprecision(0)<< f << endl;

    return 0;
}