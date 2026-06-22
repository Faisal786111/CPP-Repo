#include <bits/stdc++.h>
using namespace std;

/**
 * Operator overloading
 * Friend OO
 * Insertion(<<) OO
 * Extraction (>>) OO
 */

class Complex {
    int r; 
    int i; 
    
    public: 
        Complex(int r = 0,int i = 0) { 
            this->r = r; 
            this->i = i; 
        }

        Complex operator+(Complex &x) {
            Complex temp; 
            temp.r = r + x.r;
            temp.i = i + x.i; 

            return temp; 
        }        

        void display() { 
            cout << r << " " << i << endl;
        }

        // Friend Operator Overloading
        friend Complex operator-(Complex c1, Complex c2);
        
        // Insertion(<<) Operator Overloading
        friend ostream& operator<<(ostream &o, Complex c);
        
        // Extraction(>>) Operator Overloading
};

ostream& operator<<(ostream &o, Complex c) {
    o << c.r << " " << c.i << endl;
    
}

Complex operator-(Complex c1, Complex c2) { 
     Complex temp; 
     temp.r = c1.r - c2.r;
     temp.i = c1.i - c2.i; 

    return temp; 
}



int main(){
    Complex c1(10, 20);
    Complex c2(10, 20);
    Complex c3;

    c3 = c1 + c2; // Operator + is overloaded on to the objects of the complex class 
    
    c3.display(); 
    
    c3 = c1 - c2; // it will call the friend operator overloading function
    c3.display();

    cout << c3; 

    return 0;
}