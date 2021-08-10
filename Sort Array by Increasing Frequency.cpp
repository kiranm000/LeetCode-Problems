//Sort Array by Increasing Frequency
class Solution {
public:
        static bool comp( pair<int,int> a , pair<int,int> b )
    {return (a.second==b.second) ? a>b : a.second<b.second;}
    
    vector<int> frequencySort(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
         for(int i=0;i<nums.size();i++)
             mp[nums[i]]++;
         vector<pair<int,int> > v;
         for(auto i:mp)
             v.push_back(i);
         sort(v.begin(),v.end(),comp);
         
        vector<int> ans;
        for(int i=0;i<v.size();i++)
        {
            int k=v[i].second;
             while(k--)
                 ans.push_back(v[i].first);
        }
        return ans;
    }
};