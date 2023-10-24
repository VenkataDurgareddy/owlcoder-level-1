#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        m[k]++;
    }
    int sum=0;
    for(auto it:m)
    {
       sum=sum+it.second/2;
    }
    cout<<sum;
}
