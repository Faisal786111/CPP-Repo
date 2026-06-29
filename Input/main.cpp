#include <bits/stdc++.h> 
using namespace std; 

/**
 * getline() Definition:

    getline() is a standard C++ library function used to read an entire line of input from an input stream until a newline character ('\n') is encountered.

    Syntax: 
    getline(cin, str);

    cin -> the input stream 
    str -> the string variable where the input is stored.

    cin Definition

    cin is an object of the istream class that is used to extract formatted input from the standard input (keyboard).

    The extraction operator (>>) reads input until it encounters whitespace (space, tab, or newline).
 */

int main()
{   
    /*
        10
        Hello World
    */
    
    
    string s; 
    int n; 
    
    cin >> n; 
    cin.ignore(); // ignores '\n'

    getline(cin, s); 
    
    cout << s; 
    
    cout << n; 

    return 0;
}