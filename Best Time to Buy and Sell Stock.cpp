Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices.size();
        int maxpro=0;
        int minpri=INT_MAX;
        for(int i=0;i<l;i++)
        {
          minpri=min(minpri,prices[i]);
          maxpro=max(maxpro,prices[i]-minpri);    
        }   
        return maxpro;
    }
};