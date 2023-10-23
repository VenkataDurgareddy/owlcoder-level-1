#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string rev;
    if(s.length()==6)
    {
    for(int i=s.length()-1;i>=s.length()-3;i--)
    {
        rev=rev+s[i];
    }
    string rev1;
    for(int i=0;i<s.length()-3;i++)
    {
       rev1=rev1+s[i];
    }
    cout<<rev1+rev;
    }
    else{
        cout<<"It is not a 6 digit number";
    }
}
