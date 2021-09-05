//Find All Numbers Disappeared in an Array
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        if(nums.size()==0) return {1};
        vector<int> temp;
        vector<int> answer;
        for(int i=0;i<nums.size();i++)
            temp.push_back(i+1);
        set<int> sub;
        for(int x : nums)
            sub.insert(x);
        vector<int> sub2(sub.begin(),sub.end());
        for(int x : sub2)
            temp.push_back(x);
        unordered_map<int,int> ans;
        for(int x : temp)
            ans[x]++;
        for(int i=0;i<temp.size();i++)
        {
            if(ans[temp[i]]==1)
                answer.push_back(temp[i]);
        }
        return answer;
    }
};