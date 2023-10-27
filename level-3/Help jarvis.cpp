#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        while(n>0)
        {
            v.push_back(n%10);
            n/=10;
        }
        sort(v.begin(),v.end());
        int start=v[0];
        int k=0;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]!=start+1)
            {
                k=1;
                cout<<"NO"<<endl;
                break;
            }
            start=v[i];
        }
        if(k==0)
        {
            cout<<"YES"<<endl;
        }
    }
}
