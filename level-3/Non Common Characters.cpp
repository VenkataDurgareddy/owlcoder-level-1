#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    set<char>v;
    for(int i=0;i<s1.length();i++)
    {
        int c=0;
        for(int j=0;j<s2.length();j++)
        {
            if(s1[i]==s2[j])
            {
                c=1;
                break;
            }
        }
        if(c==0 and s1[i]!=' ')
        {
            v.insert(s1[i]);
        }
    }
    for(int i=0;i<s2.length();i++)
    {
        int c=0;
        for(int j=0;j<s1.length();j++)
        {
            if(s2[i]==s1[j])
            {
                c=1;
                break;
            }
        }
        if(c==0 and s2[i]!=' ')
        {
            v.insert(s2[i]);
        }
    }
    for(auto it:v)
    {
        cout<<it;
    }
}       
