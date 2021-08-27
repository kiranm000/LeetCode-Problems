//Generating All The Subarrays
class Solution {
public:
    vector<vector<int>> GenerateSubArray(vector<int>& arr) {
        vector<vector<int>> sub;
        for(int i=0;i<arr.size();i++)
            for(int j=i+1;j<=arr.size();j++)
            {
                vector<int> temp(arr.begin()+i,arr.begin()+j);
                sub.push_back(temp);
            }
        return sub;
    }
};