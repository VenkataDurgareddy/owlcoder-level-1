#include<bits/stdc++.h>
using namespace std;
bool isprime(int m)
{
    if(m==1)
    {
        return true;
    }
    int p=0;
    for(int i=1;i<=m;i++)
    {
        if(m%i==0)
        {
            p++;
        }
    }
    if(p==2)
    {
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 and isprime(i))
        {
            c++;
        }
    }
    cout<<c;
}
