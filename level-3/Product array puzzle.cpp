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
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        int pro=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                pro=pro*arr[j];
            }
        }
        arr1[i]=pro;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
