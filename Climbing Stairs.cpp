//Climbing Stairs
class Solution {
public:
    int climbStairs(int n) {
        if(n==1 or n==2 or n==3) return n;
        else
        {
            int ans=0;
            int a[n];
             a[0]=1;
             a[1]=2;
             a[2]=3;
            for(int i=3;i<n;i++)
            {
                a[i]=a[i-1]+a[i-2];
            }
            return a[n-1];
        }
    }
};