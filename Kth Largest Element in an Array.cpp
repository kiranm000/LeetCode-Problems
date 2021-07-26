//Kth Largest Element in an Array
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        return nums[(size-1)-(k-1)];
    }
};