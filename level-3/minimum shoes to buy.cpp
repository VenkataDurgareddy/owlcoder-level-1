#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n<=m)
    {
        cout<<n;
    }
    else{
        cout<<(2*n)-m;
    }
}
