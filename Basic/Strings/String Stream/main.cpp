#include <bits/stdc++.h>
using namespace std;

int main(){
    // How to create String Stream object 
    // Declare string
    string str;
    cin >> str;

    // Converting to stringstream object
    stringstream sso(str);

    cout << sso.str();

    return 0;
}