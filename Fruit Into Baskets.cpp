// Fruit Into Baskets
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size()==0) return 0;
        if(fruits.size()==1 || fruits.size()==2) return fruits.size();
        int size=fruits.size();
        int count=0;
        int len=0;
        unordered_map<int,int> temp;
        for(int i=0;i<size;i++)
        {
            count++;
            temp[fruits[i]]++;
            if(temp.size()<=2)
            {
                len=max(len,count);
            }
            else
            {
                i=i-count+1;
                count=0;
                temp.clear();
            }   
        }
        return len;
    }
};