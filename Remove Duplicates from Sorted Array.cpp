//Remove Duplicates from Sorted Array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={1,1,2};
    set<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.insert(nums[i]);
        } 
        int l=ans.size();
        vector<int> fans(ans.begin(),ans.end());
        for(int i=l;i<nums.size();i++)
        {
            fans.push_back(0);
        }
        return l;
        for(int x : fans)
        {
            cout<<x<<" ";
        }
}
//This particular problem has an error, there are multiple correct answers.