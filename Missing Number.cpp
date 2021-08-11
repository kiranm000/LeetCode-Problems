//Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=nums.size();
        if(l==1)
            return nums[0]+1;
        if(l==1 && nums[0]==1)
            return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]+1!=nums[i+1])
                return nums[i]+1;
        }
        return nums[l-1]+1;
    }
};