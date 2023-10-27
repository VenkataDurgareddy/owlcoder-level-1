#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        k=k%n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
            {
                cout<<v[i];
            }
            else{
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
}
