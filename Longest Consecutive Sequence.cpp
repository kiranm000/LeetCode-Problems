//Longest Consecutive Sequence
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=0;
        int ans=0;
        set<int> temp;
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        for(int i=0;i<nums.size();i++)
        {
            temp.insert(nums[i]);
        }
        vector<int> numsf(temp.begin(),temp.end());
        for(int i=0;i<numsf.size()-1;i++)
        {
            if(numsf[i]+1==numsf[i+1])
            {
                count++;
                ans=max(ans,count);
            }
            if(numsf[i]+1!=numsf[i+1])
                count=0;
        }
        return ans+1;
    }
};