//Shortest Unsorted Continuous Subarray
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        vector<int> dup;
        vector<int> ans;
        int count=0;
        int answer;
        for(int x : nums)
            dup.push_back(x);
        sort(dup.begin(),dup.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=dup[i])
            {
                count++;
                ans.push_back(i);
            }
        }
        if(count==0)
            return 0;
        int l=ans.size();
        answer=(ans[l-1]-ans[0])+1;
        return answer;
    }
};