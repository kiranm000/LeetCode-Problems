Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int r;
        bool b;
        int temp=x;
        
        if(x<0)
        {
            b=false;
        }
        
        else
        {
            while(x!=0)
            {
                r=x%10;
                rev=rev*10+r;
                x=x/10;
            }
        }
        
        if(temp==rev)
        {
            b=true;
        }
        
        return b;
    }
};