//Binary Search
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans;
        auto it=find(nums.begin(),nums.end(),target);
        if(it!=nums.end())
            ans=it-nums.begin();
        else
            ans=-1;
        return ans;
    }
};