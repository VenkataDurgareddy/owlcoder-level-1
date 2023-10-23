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
    int j=0;
    int i=0;
    while(j<=n)
    {
        if(arr[i]!=0)
        {
            arr1[j]=arr[i];
            j++;
        }
        else{
            arr1[j]=0;
            j++;
            arr1[j]=0;
            j++;
        }
        i++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
