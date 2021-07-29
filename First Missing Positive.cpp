//First Missing Positive
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
            if(!binary_search(nums.begin(),nums.end(),i))
            {
                ans.push_back(i);
            }
        return ans[0];
    }
};