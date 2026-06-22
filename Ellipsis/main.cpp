#include <iostream>
#include <bits/stdc++.h>

/**
 * Ellipsis:
 * C++ 11 feature
 * It is already there in c language
 * Function overloading is similar to Ellipsis
 */

using namespace std; 

int sum(int n, ...) { 
    va_list list; 
    va_start(list,n); 
    
    int s = 0; 
    for(int i = 0; i < n; i++) { 
        s += va_arg(list, int); 
    }
    
    va_end(list);
    
    return s;
}

int main() {
    cout << sum(3, 10, 20, 30) << endl;
    
    cout << sum(5, 1, 2, 3, 4, 5) << endl;
    return 0;
}