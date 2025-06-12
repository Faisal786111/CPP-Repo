#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_set<char> set;

    for (auto &c : s)
    {
        if (set.find(c) == set.end())
        {
            set.insert(c);
        }
    }
    
    for(auto &c: set){
        cout << c;
    }
    cout << endl;

    return set.size();
}

int main()
{
    cout << lengthOfLongestSubstring("pwwkew");
    return 0;
}