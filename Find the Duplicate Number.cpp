//Find the Duplicate Number
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> ans;
        for(int x : nums)
        {
            ans[x]++;
        }
        for(auto itr=ans.begin();itr!=ans.end();itr++)
        {
            if(itr->second>1)
                return itr->first;
        }
        return -1;
    }
};