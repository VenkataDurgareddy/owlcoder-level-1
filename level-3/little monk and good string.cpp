#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int max=0;
    int b=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u')
        {
            max++;
            if(max>b)
            {
                b=max;
            }
        }
        else{
            max=0;
        }
    }
    cout<<b;
}
