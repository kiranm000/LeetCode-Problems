//Container With Most Water
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=height.size();
        long long minnum=0;
        long long maxval=0;
        for(int i=0;i<height.size();i++)
        {
            for(int j=i+1;j<height.size();j++)
            {
                minnum=min(height[i],height[j]);
                maxval=max(maxval,minnum*(j-i));
            }
        }
        return maxval;
    }
};