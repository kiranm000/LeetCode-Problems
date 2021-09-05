//Peak Index in a Mountain Array
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int temp;
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(maxi<arr[i])
            {
                maxi=arr[i];
                temp=i;
            }
        }
        return temp;
    }
};