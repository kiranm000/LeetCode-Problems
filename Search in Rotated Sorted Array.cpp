//Search in Rotated Sorted Array
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int ans;
        vector<int> dup(nums.begin(),nums.end());
        sort(dup.begin(),dup.end());
        
        if(auto it=binary_search(dup.begin(),dup.end(),target))
         for(int i=0;i<nums.size();i++)
         {
             if(nums[i]==target)
                 ans=i;
         }
        else
            ans=-1;
        
        return ans;
    }
};