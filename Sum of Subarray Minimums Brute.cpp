//Sum of Subarray Minimums
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        if(arr.size()==0) return 0;
        if(arr.size()==1) return arr[0];
        int sum=0;
        for(int i=0;i<arr.size();i++)
            for(int j=i+1;j<=arr.size();j++)
            {
                vector<int>temp(arr.begin()+i,arr.begin()+j);
                if(temp.size()>1)
                    sort(temp.begin(),temp.end());
                sum=sum+temp[0];
            }
        return sum;
    }
};