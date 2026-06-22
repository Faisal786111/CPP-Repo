#include <bits/stdc++.h>
using namespace std;

class Rectangle { 
    int l;
    int b; 

    public: 
    // default/non parameterized constructor
    Rectangle();
    
    // Parameterized constructor
    Rectangle(int l, int b);

    // Copy Constructor 
    Rectangle(Rectangle &r);

    // Mutator 
    void setLength(int l);
    void setBreadth(int b);

    // Accessor
    int getLength();
    int getBreadth();

    // Facilitator Functions (Helper Functions)
    int area() {    // inline function 
        return l * b;
    }
    int perimeter();

    // Inspection Function 
    bool isSquare(); 

    // Destructor
    ~Rectangle(); // ~ (tilde symbol)
}

// definition of writing the function outside the class using :: 
// return_type class_name::member_function(params){ body }

int Rectangle::perimeter() { // It will ack as a seperate function in the machine code 
    return 2 * (l + b); 
}


int main(){
    
    return 0;
}