//Top K Frequent Elements
bool comp(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second>b.second);
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==1) return nums;
        unordered_map<int,int> count;
        vector<int> ans;
        for(int x: nums)
            count[x]++;
        vector<pair<int,int>> answer;
        copy(count.begin(),count.end(),back_inserter(answer));
        sort(answer.begin(),answer.end(),comp);
        for(int i=0;i<k;i++)
            ans.push_back(answer[i].first);
        return ans;
    }
};