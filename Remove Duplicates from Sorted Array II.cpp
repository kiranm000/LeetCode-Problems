//Remove Duplicates from Sorted Array II
class Solution {
public:
    int removeDuplicates(vector<int>& nums)  {   
        for(int i=0;i<nums.size();i++)
        {
            auto itr=lower_bound(nums.begin(),nums.end(),nums[i]);
            auto itr2=upper_bound(nums.begin(),nums.end(),nums[i]);
            int count=itr2-itr;
            if((count)>2)
            {
                for(int j=i+2;j<i+count;j++)
                    nums.erase(nums.begin()+i+2);
            }   
        }
        return nums.size();  
    }
};