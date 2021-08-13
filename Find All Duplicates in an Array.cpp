//Find All Duplicates in an Array
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i : nums)
        {
            mp[i]++;
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second>1)
                ans.push_back(itr->first);
        }
        return ans;
    }
};