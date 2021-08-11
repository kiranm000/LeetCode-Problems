//Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
         map<int,int> count;
        for(int x : nums)
        {
            count[x]++;
        }
        for(auto itr=count.begin();itr!=count.end();itr++)
        {
            if(itr->second==1)
                return itr->first;
        }
        return -1;
    }
};

//OR

class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int i = 0; i<nums.size(); i++)
    {
        result ^=nums[i];
    }
    return result;
    }
};