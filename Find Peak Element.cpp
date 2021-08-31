//Find Peak Element
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 0;
        vector<int> temp(nums.begin(),nums.end());
        sort(temp.begin(),temp.end());
        int max=temp[temp.size()-1];
        auto it=find(nums.begin(),nums.end(),max);
        int ans=it-nums.begin();
        return ans;
    }
};