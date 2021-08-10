//First Missing Positive
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int l=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<10000000;i++)
        {
            if(!binary_search(nums.begin(),nums.end(),i))
            {
                return i;
            }
        }
        return -1;
    }
};