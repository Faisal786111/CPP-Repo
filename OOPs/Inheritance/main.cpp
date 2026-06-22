#include <bits/stdc++.h>
using namespace std; 

class Base {
    int a; 

    public: 
        Base() { 
            cout << "Base class constructor" << endl;
        }

        Base(int x) { 
            cout << "Base class param constructor " << x << endl;
        }
        void show() { 
            cout << "This is a base class" << endl;
        }
        int getA() { return a;}
        void setA(int a) { this->a = a; }
};

class Derived: public Base { 
    int b;
    public: 
        Derived() { 
            cout << "Derived Class constructor" << endl;
        }

        Derived(int b) { 
            cout << "Param of Derived class" << b << endl;
        }
        
        // To call the parameterized of the base class 
        Derived(int a, int b): Base(a) {
            cout << "Param: " << b << endl;
        }

        void display() { 
            cout << getA() << " " << b << endl;
        }
        int getB() { return b; }
        void setB(int b) {this->b = b;}
        
        
};

int main() { 
    Derived d(10); 
    // d.setA(10);
    // d.setB(10);
    // d.show(); 
    // d.display(); 
    
    

    
    return 0;
}