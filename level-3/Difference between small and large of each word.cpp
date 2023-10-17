#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    vector<string>v;
    string dup="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
           dup=dup+s[i];
        }
        else{
            v.push_back(dup);
            dup="";
        }
    }
    if(dup.length()>=1)
    {
        v.push_back(dup);
    }
    vector<int>mini;
    vector<int>maxi;
    for(auto it:v)
    {
        string s1=it;
        sort(s1.begin(),s1.end());
        int k=(int)s1[0];
        mini.push_back(k);
        int j=(int)s1[s1.length()-1];
        maxi.push_back(j);
    }
    int sum1=0;
    for(auto it:mini)
    {
        sum1=sum1+it; 
    }
    int sum2=0;
    for(auto it:maxi)
    {
        sum2=sum2+it;
    }
    cout<<sum2-sum1;
}
