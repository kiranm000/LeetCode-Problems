//Longest Common Subsequence
int t[1001][1001];
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        memset(t,-1,sizeof(t));
        int n=text1.length();
        int m=text2.length();
        int ans=LCS(text1,text2,n,m);
        return ans;
    }
    
    int LCS(string x,string y,int i,int j)
    {
        if(i==0 || j==0)
            return 0;
        
        if(t[i][j]!=-1)
            return t[i][j];
        
        if(x[i-1]==y[j-1])
            return t[i][j]=1+LCS(x,y,i-1,j-1);
        else
            return t[i][j]=max(LCS(x,y,i-1,j),LCS(x,y,i,j-1));
    }
};