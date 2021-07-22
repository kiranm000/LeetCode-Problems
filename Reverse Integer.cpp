Reverse Integer
class Solution {
public:
    int reverse(int x) {
        long long int rev=0;
        int r;
        while(x!=0)
        {
            r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        
        if(rev>2147483646 or rev<-2147483646)
        {
            return 0;
        }
        else
        return rev;
    }
};