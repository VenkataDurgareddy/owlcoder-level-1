#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    vector<char>v;
    for(int i=0;i<s.length();i++)
    {
        int k=0;
       for(int j=0;j<s.length();j++)
       {
           if(s[i]==s[j] and i!=j)
           {
               k++;
           }
       }
       if(k==0)
       {
           v.push_back(s[i]);
       }
    }
    sort(v.begin(),v.end());
    for(auto it:v)
    {
        cout<<it;
    }
}
