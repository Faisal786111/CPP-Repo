#include <bits/stdc++.h>
using namespace std;

class Test { 
    int a;
    int *p; 

    public:
        Test(int x) { 
            a = x; 
            p = new int[a]; // dynamic memory allocation 
        }

        // Shallow copy constructor
        // Test(Test &t) { 
        //     a = t.a;
        //     p = t.p;
        // }

        // Deep copy constructor
        Test(Test &t)  {
            a = t.a; 
            p = new int[a]; 
        }
};

int main(){
    Test t(10);

    Test t1(t);


    return 0;
}