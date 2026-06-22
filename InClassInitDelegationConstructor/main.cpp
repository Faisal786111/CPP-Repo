#include <iostream>
#include <bits/stdc++.h>

/**
 * C++ Feature: 
 * InClass Initialization and Delegation of constructor
 */

using namespace std; 

class Base {
    // In-Class Initialization -> C++ 11 feature
    int a = 10; 
    int b = 20; 
    
    public: 
    Base(int x, int y) { 
        a = x; 
        b = y; 
    }
    
    // Delegation of constructor
    Base(): Base(1, 1) {}
    
    friend ostream & operator<<(ostream &cout, Base &obj); 
};

ostream & operator<<(ostream &cout, Base &obj) { 
    cout << "A: " << obj.a << endl;
    cout << "B: " << obj.b << endl;
    
    return cout; 
}

int main() {
    Base b;
    
    cout << b; 
    return 0;
}