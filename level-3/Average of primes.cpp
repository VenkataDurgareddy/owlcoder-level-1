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
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
               c++;
            }
        }
        if(c==2)
        {
            v.push_back(arr[i]);
        }
    }
    int sume=0;
    for(auto it:v)
    {
       sume=sume+it;
    }
    float size=v.size();
    float avg=sume/size;
    printf("%.2f",avg);
}
