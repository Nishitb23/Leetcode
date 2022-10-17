class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> v;
        int index1=0, index2=0;
        
        while(index1<nums1.size() && index2<nums2.size()){
            if(nums1[index1]>nums2[index2]){
                v.push_back(nums2[index2]);
                index2++;
            }else{
                v.push_back(nums1[index1]);
                index1++;
            }
        }
        
        while(index1<nums1.size()){
            v.push_back(nums1[index1++]);
            
        }
        while(index2<nums2.size()){
            v.push_back(nums2[index2++]);
        }
        
        if(v.size()%2){
            return (v[v.size()/2]);
        }else{
            return ((double)v[v.size()/2] + (double)v[v.size()/2 - 1])/2;
        }
        
        return 0;
        
    }
};