//Maximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int sum=0;
        if(nums.size()==1)
            return nums[0];
        
        if(nums.size()==2)
        {
            int t=nums[0]+nums[1];
            if(nums[0]>=nums[1])
                return max(nums[0],t);
            else
                return max(nums[1],t);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            sum=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                sum=sum+nums[j];
                ans=max(ans,sum); 
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};