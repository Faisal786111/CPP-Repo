#include <bits/stdc++.h> 
using namespace std; 

using pis = pair<int, string>;

int main()
{   
    /*
        10
        Hello World
    */
    
    string s; 
    int n; 
    
    getline(cin, s); 
    cin >> n; 

    stringstream ss(s);
    
    string word;
    
    priority_queue<pis, vector<pis>, greater<pis>> mnH; 
    unordered_map<string, int> m; 
    
    while(ss >> word) {
        m[word]++; 
        
        mnH.push({m[word], word});
        
        if(mnH.size() > n) mnH.pop();
    }
    
    while(!mnH.empty()) { 
        int freq = mnH.top().first; 
        string key = mnH.top().second; 
        
        cout << key << ": " << freq << " ";
        
        mnH.pop();
    }

    return 0;
}