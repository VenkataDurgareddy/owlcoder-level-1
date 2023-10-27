["++X" "++X" "X++"]
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v;
    string s;
    while(cin>>s)
    {
        v.push_back(s);
    }
    int ans=0;
    for(auto it:v)
    {
        string s=it;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='+')
            {
                ans=ans+1;
                break;
            }
            else if(s[i]=='-')
            {
                ans=ans-1;
                break;
            }
        }
    }
    cout<<ans;
    
}
