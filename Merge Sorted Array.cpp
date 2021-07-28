//Merge Sorted Array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin()+(m),nums1.end());
        nums2.erase(nums2.begin()+(n),nums2.end());
        for(int i=0;i<n;i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        for(int x : nums1)
        {
            cout<<x<<" ";
        }
    }
};