class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int> mp;
        int curr_window=0, max_window=0, start=-1;
        
        for(int i=0;i<s.size();i++){
            
            if(mp.find(s[i])!=mp.end() && mp[s[i]]>start){
                start = mp[s[i]];
            }
            
            mp[s[i]] = i;
            curr_window = i-start;
            max_window = max(max_window,curr_window);
            
        }
        
        return max_window;
        
    }
};