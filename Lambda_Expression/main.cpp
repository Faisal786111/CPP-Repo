#include <bits/stdc++.h>
#include <iostream>

using namespace std; 
/***
 * [capture_list] (Params) -> return_type(optional) {body} (); 
 * It is a functioni like un-named function without any function name
 * AKA Anonymouse function
 */
 

int main()
{
    [] () { cout << "Hello" << endl; } ();
    
    [] (int a, int b) { cout << a + b << endl; } (10, 20);
    
    auto x = [] (int a, int b) { return a * b; } (10, 20); 
    
    cout << x << endl;
    
    auto f = [] () { cout << "referecend function" << endl; };
    
    f();
    
    // capture_list
    int a = 10, b = 20; 
    
    [a, b] () { cout << a << " " << b << endl;} ();
    
    // Read only variable we can't modify them 
    // [a, b] () { cout << ++a << " " << ++b << endl;} (); 

    // Now we can modify those vars    
    [&a, &b] () { cout << ++a << " " << ++b << endl; } ();
    
    // Access all the variables
    [&] () { cout << a << " " << b << endl; } ();
    
    return 0;
}