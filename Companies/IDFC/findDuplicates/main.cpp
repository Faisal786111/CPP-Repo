class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int, int> m; 
        
        for(int x: arr) m[x]++;
        
        vector<int> ans; 
        
        for(auto &[key, freq]: m) { 
            if(freq == 2) ans.push_back(key);   
        }
        
        return ans; 
    }
};