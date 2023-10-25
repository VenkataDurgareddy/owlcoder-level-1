#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    vector<string>v;
    string dup;
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
    vector<int>v1;
    for(auto it:v)
    {
        string s1=it;
        sort(s1.begin(),s1.end());
        char c1=s1[0];
        char c2=s1[s1.length()-1];
        int sub=abs((int)c1-(int)c2);
        v1.push_back(sub);
    }
    for(auto it:v1)
    {
        cout<<it<<" ";
    }
}
