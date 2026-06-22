#include <bits/stdc++.h>
using namespace std;

class Base { 
    public: 
    Base() { 
        cout << "Base Constructor" << endl;
    }

    virtual ~Base() {
        cout << "Base Destructor" << endl;
    }
};

class Derived: public Base{
    public:
    Derived() { 
        cout << "Derived Constructor" << endl;
    }

    ~Derived() { 
        cout << "Derived Destructor" << endl;
    }
};

int main(){
    // Derived d; 
    /**
     * Base consturctor
     * Derived constructor
     * Derived Destructor
     * Base Destructor
     */

    // Base pointer points to the derived class object 
    Base *p = new Derived(); // It will call both consturctors
    /**
     * Base constructor
     * Derived Constructor
     */

    delete p; 
    /**
     * It will only call: 
     * Base Desturctor
     * It means it will only de-allocate all the resources which is held by the base 
     * class pointer and it will not de allocate the resources of derived class
     * 
     * To solve this problem we need to use virtual destructor so that it will call both 
     * constructors of derived and as well as base class
     * With Virtual Destructor: 
     * 
     * OP: 
     * Derived Destructor
     * Base Destructor
     */
    return 0;
}