/***
 * Variables and literals  
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Variable(identifier) Initialization
    int a = 1.7;
    int b(10);
    int c = (10);
    int d{20};
    int e = {20};
    long l = 10921398L; 
    
    cout << l << endl;
    cout << typeid(a).name() << endl;
    cout << a << endl;
    
    
    cout << b << c << d << e << endl;
    
    // int literals
    int f = 10; 
    int octal = 012; // Octal number (10)
    int hex = 0x123; // Hexadecimal number (291)
    cout << f << " " << octal << " " << hex << endl;
    
    // float literals
    float f1 = 102; 
    cout << f1 << endl;
    cout << typeid(f1).name() << endl;
    
    f1 = 10.20f; // 10.20 by default double
    cout << f1 << endl;
    cout << typeid(f1).name() << endl; 
    cout << typeid(10.20).name() << endl; // double
    cout << typeid(10.20f).name() << endl; // float
    
    float cost = 1.72e7;
    cout << cost << endl;
    
    double d1 = 100212L; // L is optional 
    cout << d1 << endl;
    
    // char literals 
    char a1 = 'A'; 
    // a1 = "A"; // invalid 
    char a2 = 65;  // ASCII (American Std Code for infromation interchange)
    cout << a2 << endl;
    
    // Boolean Literal 
    bool b3 = true;
    // false -> 0 
    // true -> any other number except 0 
    cout << b3 << endl;
    
    // string literal 
    string st = "what are you doing"; // st is an object 
    cout << st << endl;
    return 0;
}