//Find First and Last Position of Element in Sorted Array
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> count;
        vector<int> ans;
       
        if(binary_search(nums.begin(),nums.end(),target))
        {for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==target)
                    count.push_back(i);
            }
        ans.push_back(count[0]);
        ans.push_back(count[count.size()-1]);}
        
        else
        {ans.push_back(-1);
            ans.push_back(-1);}
        
        return ans;
    }      
};