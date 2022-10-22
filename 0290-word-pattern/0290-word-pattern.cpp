class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> tokens;
        string token;
        stringstream ss(s);
        
        while(getline(ss,token,' ')){
            tokens.push_back(token);
        }
        
        if(pattern.size()!=tokens.size()){
            return false;
        }
        
        unordered_map<char,string> cs;
        unordered_map<string,char> sc;
        
        for(int i=0;i<pattern.size();i++){
            if(cs.find(pattern[i])==cs.end() && sc.find(tokens[i])==sc.end()){
                cs[pattern[i]] = tokens[i];
                sc[tokens[i]] = pattern[i];
            }else if(cs.find(pattern[i])!=cs.end() && sc.find(tokens[i])!=sc.end()){
                if(cs[pattern[i]]!=tokens[i] || sc[tokens[i]]!=pattern[i]){
                    return false;
                }
            }else{
                return false;
            }
        }
        
        return true;
        
    }
};