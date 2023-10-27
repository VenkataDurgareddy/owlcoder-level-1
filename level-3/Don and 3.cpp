#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int c=0;
        while(a%3!=0 and b%3!=0)
        {
            a=abs(a-b);
            b=abs(a-b);
            c++;
        }
        cout<<c<<endl;
    }
}
