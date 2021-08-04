//Power of Two
class Solution {
public:
    bool isPowerOfTwo(long long n) {
        if(n<=0) return false;
        bool b;
        long long count=0;
        while(n)
        {
            count++;
            n=n&(n-1);
        }
        if(count==1)
        {
            b=true;
            return b;
        }
        else
        {
            b=false;
            return b;
        }
    }
};