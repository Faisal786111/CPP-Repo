/**
 * Name Spaces  
 * 
 */
 
#include <iostream>
using namespace std;

namespace first { 
    void display() { 
        cout << "first" << endl;
    }
}

namespace second {
    void display() { 
        cout << "second" << endl;
    }
}

using namespace first; 

int main(){
    display(); 
    second::display();
    return 0;
}