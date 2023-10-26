#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int n1=n;
    int a=n;
    int b=0;
    int c=0;
    while(true)
    {
        n1=n1-1;
        int k=n1;
        string s=to_string(k);
        string s1=s;
        reverse(s.begin(),s.end());
        if(s==s1)
        {
            b=stoi(s);
            break;
        }
    }
    while(true)
    {
        n=n+1;
        int k=n;
        string s=to_string(k);
        string s1=s;
        reverse(s.begin(),s.end());
        if(s==s1)
        {
            c=stoi(s);
            break;
        }
    }
    int sub1=abs(a-b);
    int sub2=abs(a-c);
    if(sub1==sub2)
    {
      cout<<b<<" "<<c;  
    }
    else if(sub1<sub2)
    {
        cout<<b;
    }
    else{
        cout<<c;
    }

    
    
}
