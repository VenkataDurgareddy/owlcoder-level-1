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
    int count=0;
    int sume;
    for(int i=0;i<n;i++)
    {   
        sume=arr[i];
        if(sume==0)
        {
            count++;
        }
        for(int j=i+1;j<n;j++)
        {
                sume=sume+arr[j];
                if(sume==0)
                {
                    count++;
                }
        }
    }
    cout<<count;
}
