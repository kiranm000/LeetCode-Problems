//Palindromic Substrings
class Solution {
public:
    int countSubstrings(string s) {
        int size=s.length();
        if(size==0) return 0;
        if(size==1) return 1;
        if(size==2 && s[0]!=s[1]) return 2;
        if(size==2 && s[0]==s[1]) return 3;
        int count=0;
        for(int i=0;i<size;i++)
            for(int j=1;j<=size-i;j++)
            {
                string temp1=s.substr(i,j);
                string temp2=temp1;
                reverse(temp1.begin(),temp1.end());
                if(temp2==temp1)
                    count++;
            }
        return count;
    }
};