//Number of 1 Bits
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int mask=1;
        int count=0;
        while(n>0)
        {
        if(n&mask>0)
            count++;
        n=n>>1;
        }
        return count;
    }
};