//Search in Rotated Sorted Array II
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        bool b=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                b=true;
        }
        return b;
    }
};

OR

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        bool b=binary_search(nums.begin(),nums.end(),target);
        return b;
    }
};