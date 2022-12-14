class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                vector<int> v;
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            mp.insert({nums[i],i});
        }
        return vector<int>();
    }
};