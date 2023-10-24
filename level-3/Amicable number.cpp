#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    int sum1=0;
    int sum2=0;
    for(int i=1;i<m;i++)
    {
        if(m%i==0)
        {
            sum1=sum1+i;
        }
    }
     for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum2=sum2+i;
        }
    }
    if(sum1==n && sum2==m)
    {
        cout<<"Amicable";
    }
    else{
        cout<<"Not Amicable";
    }
}
