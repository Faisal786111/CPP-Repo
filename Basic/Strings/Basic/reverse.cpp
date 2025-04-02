#include <bits/stdc++.h>
using namespace std;

void reverseFirst(string str){
    string str_reverse;
    for(int i = str.size()-1; i >-1; i--){
        str_reverse.push_back(str[i]); // n * O(1);

        //s = s + 'a'; // O(s.size())
    }

    cout << str_reverse << endl;
}

void reverseSecond(string str){
    reverse(str.begin(), str.end()); // In-place reverse
    cout << str << endl;
}

bool isPandlindrome(string str){
    string str_reverse;
    for(int i = str.size()-1; i >-1; i--){
        str_reverse.push_back(str[i]); // n * O(1);

        //s = s + 'a'; // O(s.size())
    }
    return (str == str_reverse) ? true: false;
}

int main(){
    string str;
    getline(cin, str);

    reverseFirst(str);

    reverseSecond(str);

    if(isPandlindrome(str)){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
}