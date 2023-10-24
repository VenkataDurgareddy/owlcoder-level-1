#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    vector<int>v;
    for(int i=n;i<=m;i++)
    {
        int k=i;
        int c=0;
        while(k>0)
        {
            int r=k%10;
            if(r==0 or i%r!=0)
            {
                c=1;
                break;
            }
            k/=10;
        }
        if(c==0)
        {
            v.push_back(i);
        }
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}
