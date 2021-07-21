Median of Two Sorted Arrays
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        int s=(nums1.size());
        int A[s];
        for(int i=0;i<s;i++)
        {
            A[i]=nums1[i];
        }
        sort(A,A+s);
        if(s%2==0)
        {
            ans=(double)(A[s/2]+A[((s/2)-1)])/2;
        }
        else {ans=A[s/2];}
        return ans;
    }
};