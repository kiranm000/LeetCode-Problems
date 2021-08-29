//Kth Smallest Element in a Sorted Matrix
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> sub;
        int size=matrix.size();
        for(int i=0;i<size;i++)
            for(int j=0;j<size;j++)
                sub.push_back(matrix[i][j]);
        sort(sub.begin(),sub.end());
        return sub[k-1];          
    }
};