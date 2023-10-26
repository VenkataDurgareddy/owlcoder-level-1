#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=-1;
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
        if(m[arr[i]]==k)
        {
            res=arr[i];
            break;
        }
    }
    cout<<res;
}
