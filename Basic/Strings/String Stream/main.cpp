#include <bits/stdc++.h>
using namespace std;

int main(){

    // stringstream ss;  // Step 1: Create a stringstream object
    // string input = "Hello, World!";

    // ss << input;  // Step 2: Store the string in the stringstream

    // string output;
    // ss >> output;  // Step 3: Extract the stored string

    // cout << "Stored String: " << ss.str() << endl;  // Prints full stored string
    // cout << "Extracted Word: " << output << endl;  // Extracts only the first word
    // How to create String Stream object 
    string str;
    getline(cin, str);
    stringstream ss;

    ss << str;
    
    int res = 0;
    while (ss >> str) {
        res = str.length();
    }
    cout << res << endl;
    return 0;
}