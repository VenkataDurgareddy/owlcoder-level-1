#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int c=0;
    vector<char>v;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            v.push_back(s[i]);
        }
    }
    for(auto it:v)
    {
        int charcount=count(v.begin(),v.end(),it);
        if(charcount==1)
        {
            c++;
        }
    }
    cout<<c;
}
