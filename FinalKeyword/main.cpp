#include <bits/stdc++.h>
using namespace std;
/**
 * Restricts Inheritance and function overriding
 */
class Base final {
    virtual void show() final { 

    }
};

class Derived: public Base {
    void show() { 

    }
};

int main(){
    
    return 0;
}