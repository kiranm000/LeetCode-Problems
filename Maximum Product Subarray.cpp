//Maximum Product Subarray
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=nums[0];
        int mi=nums[0];
        int ma=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
                swap(mi,ma);
            ma=max(nums[i],ma*nums[i]);
            mi=min(nums[i],mi*nums[i]);
            if(ma>prod)
                prod=ma;
        }
        return prod;
    }
};