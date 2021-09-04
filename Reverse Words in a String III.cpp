//Reverse Words in a String III
class Solution {
public:
    string reverseWords(string s) {
        string answer;
        string word;
        stringstream iss(s);
        while(iss>>word)
        {
            reverse(word.begin(),word.end());
            answer+=word;
            answer+=" ";
        }
        answer.pop_back();
        return answer;
    }
};