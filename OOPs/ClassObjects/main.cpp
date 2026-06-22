#include <bits/stdc++.h> 
using namespace std; 

// class 
class Rectangle { 
    private: // by default private
        int l;
        int b; 
    public:
        int area() { 
            return l * b; 
        }

        int perimeter() { 
            return 2 * (l + b);
        }
        
        // Constructor
        Rectangle() { // Non-Parameterized 
            l = 0; 
            b = 0; 
        }

        // Parameterized 
        Rectangle(int l, int b) { 
            this->l = l; 
            this->b = b; 
        }

        // Copy Constructor
        Rectangle(Rectangle &r) { 
            l = r.l;
            b = r.b; 
        }

        int display() {
            return l * b;
        }

};

int main() { 
    // // objects 
    // Rectangle r1; // Stack (static) allocation

    // Rectangle *p; // Pointer to an object 
    // p = &r1; 

    // r1.l = 2; 
    // r1.b = 2;
    // cout << r1.area() << " " << r1.perimeter() << endl; 
    
    // p->l = 4; 
    // p->b = 3; 

    // cout << p->area() << " " << p->perimeter() << endl;  // Deferencing 

    // Rectangle *q = new Rectangle; // Heap (Dynamic) Allocation: Ptr will point to un-named object 
    // q->l = 1;
    // q->b = 1; 

    // cout << q->area() << " " << q->perimeter() << endl; 
    
    // // Another way of allocating the heap memory allocation
    // Rectangle *s = new Rectangle();
    // s->l = 1;
    // s->b = 1; 

    // cout << s->area() << " " << s->perimeter() << endl; 

    Rectangle r;
    
    cout << r.display() << endl; 

    Rectangle r1(10, 20);
    cout << r1.display() << endl; 

    Rectangle r3(r1);
    cout << r3.display() << endl;

    
    
    return 0; 
}