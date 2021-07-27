//Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int l=s.length();
        for(int i=l-1;i>=0;i--)
        {
            if(count==0 && s[i]==' ')
                count=0;
            else if(count>0 && s[i]==' ')
                return count;
            else
                count++;
        }
        return count;
    }
};