#include <bits/stdc++.h>
using namespace std;

// Using string stream
string reverseWords(string s) {
        vector<string> words;
        string word, result ="";

        stringstream ss(s);

        // Extract all words from string
        while(ss >> word){
            words.push_back(word);
        }

        // Reverse word by word

        for(int i = words.size()-1; i >=0; i--){
            result += words[i];

            if (i > 0) {
                result += " "; // Add space between words
            }
        }

        return result;
    }

void reverseWord(string str){
    int n = str.length();
    string ans = "";
    
    // Reverse each character
    reverse(str.begin(), str.end());

    for(int i = 0; i<n; i++){
        string word = "";
        while(i < n && str[i] != ' '){
            word.push_back(str[i++]);
        }

        // Reverse inidividual word
        reverse(word.begin(), word.end());

        if(word.length() > 0){
            ans+= " " + word;          
        }
    }

    cout << ans.substr(1) << endl;
}

int main(){
    string str;
    getline(cin, str);

    reverseWord(str);
    return 0;
}