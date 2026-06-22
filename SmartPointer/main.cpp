#include <bits/stdc++.h>
#include <memory>
using namespace std;

/**
 * Smart Pointers
 */

class Rectangle {
    int l;
    int b; 
    
    public:
    Rectangle(int l, int b) { 
        this->l = l;
        this->b = b; 
    }
    
    void area() {
        cout << l * b << endl;
    }
    
    void perimeter() { 
        cout << 2 * (l + b) << endl;
    }
};

void fun() { 
    // Rectangle *p = new Rectangle(); 
    
    // delete p; 
    
    // Unique Pointer
    // unique_ptr<Rectangle> p1(new Rectangle(2, 3));
    // p1->area(); 
    // p1->perimeter();

    // unique_ptr<Rectangle> p2 = p1; // not allowed
    // unique_ptr<Rectangle> p2 = move(p1);
    // p2->area(); 
    // p1 = nullptr; 
    
    // Shared pointer
    shared_ptr<Rectangle> s1(new Rectangle(10, 20));
    s1->area();
    s1->perimeter();
    
    shared_ptr<Rectangle> s2 = s1; 
    s2->area();
    s2->perimeter();
    
    cout << s1.use_count() << endl;
    
    // weak ptr
    weak_ptr<Rectangle> wp = s1;
    
    // wp->area();  // It cannot access bcoz, it can't own the object only it can observe
    
    // It won't increase the reference count
    cout << wp.use_count() << endl;
    
}

int main() {
	// your code goes here
    // while(1) {  --> memory leak 
    //     fun();
    // }
    
    fun();
    
}
