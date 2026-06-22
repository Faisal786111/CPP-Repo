// Preprocessor Directives/ Macros (It starts with #)
#include <bits/stdc++.h>

#define PI 3.14 // Symbolic Const 
#define c cout  // Macro Alias
#define MSG(x) #x // Convert plan text to string literal

// Function using Macros
#define SQR(x) (x*x)

#ifndef PI
    #define PI 3.14
#endif

using namespace std; 



int main() { 
    cout << PI << endl;   
    c << MSG(Faisal Khan) << endl;
    c << SQR(5) << endl;
}