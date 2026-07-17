class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        n = abs(n); // To handle negative number
        string x = to_string(n); 
        
        string r = x; 
        
        reverse(r.begin(), r.end()); 
        
        return x == r;
    }
};