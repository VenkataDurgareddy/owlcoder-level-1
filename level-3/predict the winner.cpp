#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int xsum=0;
    int ysum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            xsum=xsum+arr[i];
        }
        else{
            ysum=ysum+arr[i];
        }
    }
    int diff=abs(xsum-ysum);
    if(diff%4==0)
    {
        cout<<"X";
    }
    else{
        cout<<"Y";
    }
}
