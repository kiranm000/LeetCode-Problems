//Maps and its Fuctions
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> trial;
    string st="My name is Kiran";
    
    for(char c : st)
    {
        trial[c]++;
    }
    
    trial.erase(' ');
    
    trial['o']=2;
    
    pair<char,int> p1 {'d',2};
    
    trial.insert(p1);
    
    for(auto it=trial.begin();it!=trial.end();it++)
    {
        cout<<"Count of "<<(*it).first<<" : "<<(*it).second<<endl;
    }
    
    if(trial.find('K')==trial.end())
        cout<<"No, its not present!"<<endl;
    else
        cout<<"Yes, its present!"<<endl; 
}