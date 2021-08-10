//Contains Duplicate
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> count;
        for(int x : nums)
        {
            count[x]++;
        }
        for(auto itr=count.begin();itr!=count.end();itr++)
        {
            if(itr->second>1)
                return true;
        }
        return false;
    }
};