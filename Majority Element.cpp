//Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int ans=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
                ans=max(ans,count);
            }
            else 
                count=1;
        }
        
        map<int,int> mp;
        for(int x : nums)
            mp[x]++;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==ans)
                return it->first;
        }
        return -1;
    }
};