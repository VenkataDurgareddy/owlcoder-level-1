#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sume=0;
    for(int i=0;i<n;i++)
    {
        int sqr=sqrt(arr[i]);
        if(sqr*sqr==arr[i])
        {
            sume=sume+arr[i];
        }
    }
    cout<<sume;
}
