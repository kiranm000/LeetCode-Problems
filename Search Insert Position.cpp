//Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;
        int size=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                ans=i;
        }
        if(!binary_search(nums.begin(),nums.end(),target))
        {
            for(int i=0;i<size-1;i++)
        {
            if(nums[i]<target && target<nums[i+1])
                ans=i+1; 
        }
        }
        
        if(nums[size-1]<target)
            ans=size;
        if(nums[0]>target)
            ans=0;
        
        return ans;
    }
};