#include <bits/stdc++.h>
using namespace std; 

// Car Class -> general class 
// Abstract class: It contains atleast one pure virutal function
// We can't create object of abstract class but can create pointer/referece of abstract class
class Car { 
    public: 
    
    // virtual void start() { 
    //     cout << "Car is started" << endl;
    // }

    virtual void start() = 0; // Pure virtual function

    // virtual void stop() { 
    //     cout << "Car is stopped" << endl;
    // }
    virtual void stop() = 0; // Pure virtual function 
};

// Class Innova Inherits Class Car -> Specific class  
class Innova: public Car { 
    public: 
    void start() { 
        cout << "Innova is started" << endl;
    }

    void stop() { 
        cout << "Innova is stopped" << endl;
    }

};

// Class Toyota Inherits Class Car -> Specific class
class Toyota: public Car{
    public: 
    void start() { 
        cout << "Toyota is started" << endl;
    }

    void stop() { 
        cout << "Toyota is stopped" << endl;
    }
};

int main() { 
    // Base class pointer derived class object to achive polymorphism
    Car *c = new Innova();
    c->start(); // Innova is started 
    
    c = new Toyota();
    c-> start(); // Totyoa is started

    return 0; 
}