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
    int c=0;
    int a=m[s[0]];
    for(auto it:m)
    {
        if(it.second!=a)
        {
            c++;
        }
    }
    if(c<=1)
    {
        cout<<"Valid String";
    }
    else{
        cout<<"Not Valid";
    }
}
