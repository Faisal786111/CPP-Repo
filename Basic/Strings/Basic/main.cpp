#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, str2;

    // if(str == str2){
    //     cout << "Yes";
    // }else {
    //     cout << "No";
    // }

    // Iterte over string
    // for(int i = 0; i < str.size(); i++){
    //     cout << str[i];
    // }

    // Modify string 
    // str[0] = 'w';
    // cout << str;

    // cin >> str >> str2;
    // cout << str << str2;

    // It is used to get whole line as input
    // int t;
    // cin >> t;
    // cin.ignore(); // only needed when switching from integer input to string input 
    // while(t--){
    //     string s;
    //     getline(cin, s);
    //     cout << s << endl;
    // }
    
    // Dealing with large no using string
    cin >> str;
    int last_digit = str[str.size() -1] - '0'; // To convert string to int;
    cout << last_digit;
    return 0;
}