#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int liked=2;
    int received=5;
    if(n>=1)
    {
        for(int i=1;i<n;i++)
        {
           received=(received/2)*3;
           liked=liked+(received/2);
        }
    }
    cout<<liked;
}
