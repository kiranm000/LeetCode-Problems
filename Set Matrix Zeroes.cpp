//Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> sub;
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    sub.push_back(temp);
                }
            }
        for(int k=0;k<sub.size();k++)
            for(int i=0;i<matrix.size();i++)
                for(int j=0;j<matrix[0].size();j++)
                {
                    if(i==sub[k][0])
                        matrix[i][j]=0;
                    if(j==sub[k][1])
                        matrix[i][j]=0;
                }
    }
};