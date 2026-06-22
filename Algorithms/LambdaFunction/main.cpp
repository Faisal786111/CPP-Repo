/*
Lambda Function: 
It is a temporary function and also called as anonymous for which we don't have specify 
function name.

Syntax: 
[capture](parameters) { // function body };

Capture: Defines what variables from surrounding scope can be accessed
calling:
(arguments) 
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    // Lambda function with capture clause and directly call 
    cout << [](int x) {return x;}(2)<< endl;

    auto sum = [](int x, int y){
        return x + y;
    };

    cout << "Sum of two numbers: " << sum(4,5) << endl;

    // Lambda function with capture clause 
    int x = 10;

    auto multiply = [x](int y) {
        return x * y;
    };

    cout << "Multi. of two numbers: " << multiply(5) << endl; // OP: 5 * 10 = 50


    return 0;
}