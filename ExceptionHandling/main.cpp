#include <bits/stdc++.h>
#include <iostream>

using namespace std; 

class Age: public exception {

};

class MyClass1 {}; // Dummy class

class MyClass2: public MyClass1 {};

// Throw and catch is useful for the communication between functions
int division(int a, int b) { 
    if(b == 0) throw Age(); 
    
    return a / b; 
}

int main()
{
    // cout << 10/0 << endl; // It will crash here 
    // cout << "BYe" << endl;
    
    int x = 0, y = 1, z; 
   
    
    try { 
        // if(y == 0) throw 1;   
        // z = x / y; // Exception
        // cout << z << endl; 
        
        z = division(x, y); 
        cout << z; 
        try { 
            if(x == 0) throw "Nest Try catch";
        }
        catch(string s) {
            cout << s << endl;
        }
        
    }
    
    catch(Age e) { 
        cout << "Division Error"  << endl;
    }
    catch(MyClass2 m2){
        cout << "Myclass2 Exception" << endl;
    }
    catch(MyClass1 m1) {
        cout << "Myclass1 Exception" << endl;
    }
    catch(...) { 
        cout << "Hello what are you doing" << endl;
    }
    cout << "Bye" << endl;
    return 0;
}