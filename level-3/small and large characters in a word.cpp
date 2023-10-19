#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string dup;
    vector<string>v;
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
    vector<char>ans;
    for(auto it:v)
    {
        string s1=it;
        sort(s1.begin(),s1.end());
        ans.push_back(s1[0]);
        ans.push_back(s1[s1.length()-1]);

    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}
