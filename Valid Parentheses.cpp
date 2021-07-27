//Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
        stack<char> ele;
        ele.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(s[i-1]=='(' && s[i]==')')
            {
                ele.pop();
            }
            else if(s[i-1]=='{' && s[i]=='}')
            {
                ele.pop();
            }
            else if(s[i-1]=='[' && s[i]==']')
            {
                ele.pop();
            }
            else
            {
                ele.push(s[i]);
            }   
        }
        return ele.size()==0;
    }
};