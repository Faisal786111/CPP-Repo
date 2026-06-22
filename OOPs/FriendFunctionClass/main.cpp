#include <bits/stdc++.h>
#include <iostream>

using namespace std; 

class B; // Friend class Declaration

class A { 
    int a; 
    
    friend B; 
    public: 
    A(int a = 0) {
        this->a = a; 
    }
    friend void show(); // friend function
};

void show() {
    A obj(10); 
    cout << obj.a << endl;;
}

class B { 
    public: 
    // Member function tries to access private member of class A
    void display(A obj) { 
        cout << obj.a << endl; 
    }
};

int main()
{
    B b;
    A a(10); 
    b.display(a);
    show(); 
    return 0;
}