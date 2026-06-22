#include <bits/stdc++.h>
using namespace std;

/**
 * Lambda Expression: 
 * It is a temporary function which can be written inside the main function;
 * It is used to write comparator function.
 * 
 * Syntax: 
 * auto lambda_function_name = [] (parameters) {
 *  /// Lambda body
 * };
 * 
 * Parameters:
 * [] -> capture clause
 * 
 * 🔸 Map ko sort karna hai → usko vector me daal → lambda comparator likh → sort() lagaa → print kar. ✅
 */

// Aliases
using v = vector<int>;
using p = pair<int, int>;

void print(v &arr) {
    for(auto i: arr) {
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    v arr = {2, 3, 1, 4, 5, 10};
    
    // LE: ASC 
    auto myLambdaASC = [] (int a, int b) {
        return a < b;
    };

    // LE: DESC 
    auto myLambdaDESC = [] (int a, int b) {
        return a > b;
    };

    cout << "LE: ASC" << endl;
    sort(begin(arr), end(arr), myLambdaASC);
    print(arr);

    cout << "LE: DESC" << endl;
    sort(begin(arr), end(arr), myLambdaDESC);
    print(arr);

    return 0;
}