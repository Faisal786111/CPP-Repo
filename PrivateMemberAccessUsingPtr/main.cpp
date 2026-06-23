#include <bits/stdc++.h> 
#include <iostream>

using namespace std; 

class Test { 
    int x = 10; 
    int y = 20; 
    double d = 20.1;
};

int main()
{
    Test t;
    
    Test *p1 = &t; // It is not allowed 
    
    int *p = (int*)&t; 
    
    // cout << p->x << endl; // It will give erro
    
    cout << *p << endl; // It will display 10
    ++p; 
    cout << *p << endl; // It will display 20
    
    ++p; 
    cout << *p << endl; // It will display grabage value bcoz here only it incremeent by 2bytes 
    return 0;
}