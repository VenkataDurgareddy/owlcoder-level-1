#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    int max=INT_MIN;
    int secmax=max;
    for(auto it:m)
    {
        if(it.second>max)
        {
            max=it.second;
        }
    }
    char c;
    int c1=0;
    for(auto it:m)
    {
        if(it.second>secmax and it.second!=max)
        {
            c1=1;
            secmax=it.second;
            c=it.first;
        }
    }
    if(c1==1)
    {
        cout<<c;
    }
    else{
       cout<<"-1"; 
    }
}
