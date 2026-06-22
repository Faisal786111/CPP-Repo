#include <bits/stdc++.h>
using namespace std;

class Test { 
    int *p;

    public:
    Test() {  // Allocation of resources
        p = new int[5];
        cout << "Constructor called" << endl;
    }
    
    void insert() { 
        for(int i = 0; i < 5; i++) { 
            p[i] = i + 1; 
        }
    }
    
    void display() { 
        for(int i = 0; i < 5; i++) cout << p[i] << " ";
        cout << endl;
    }
    
    ~Test() { 
        delete []p; 
        cout << "Destructor Called" << endl;
    }
};

int main(){
    Test t; 
    t.insert();
    t.display();
    
    Test *t1 = new Test(); // When we create an object dynamically then only constructor will be called 
    // Inorder to call destructor we need to delete that object from heap memory using delete keyword
    delete t1;
    
    return 0;
}