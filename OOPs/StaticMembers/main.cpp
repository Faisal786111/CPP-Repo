#include <bits/stdc++.h>
#include <stdio.h>

using namespace std; 

class Test { 
    int a, b; 
    
    public: 
    static int count;
    
    Test(int a = 0, int b = 0) { 
        this->a = a; 
        this->b = b; 
        
        count++; 
    }
    
    void display() { 
        cout << a << " " << b << " " << count << endl; 
    }
    
    static int getCount() { // It can only access static data members 
        // It is used to access static data member when it is private
        return count; 
    }
    
};

int Test::count = 0; // Two times declaration

// Car example
class Innova {
    static int price; 

    public: 
    static int getPrice() {
        return price; 
    }
};

int Innova::price = 2000; 

// Student admin no example 
class Student { 
    int adminNo; 
    static int count; 
    
    public: 
    Student() { 
        count++; 
        adminNo = count; 
    }
    
    static int getCount() {
        return count; 
    }
    
    void display() {
        cout << adminNo << endl;  
    }
};

int Student::count = 0; 

int main()
{
    // Test t1(10, 20); 
    // Test t2; 
    
    // t1.display(); 
    // t2.display();
    
    // cout << t1.count << endl; 
    // cout << t2.count << endl; 
    // cout << Test::count << endl; // Recommended to call static members with class name only 
    
    // cout << Test::getCount() << endl; 
    // cout << t1.getCount() << endl;

    // cout << Innova::getPrice() << endl;
    
    // Innova i; 
    // cout << i.getPrice() << endl;

    Student s1; 
    Student s2; 
    
    cout << Student::getCount() << endl; 
    s1.display(); s2.display(); 
    return 0;
}