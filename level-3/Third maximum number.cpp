#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        s.insert(k);
    }
    int max1=0,max2=0,max3=0;
    int j=0;
    for(auto it=s.rbegin();it!=s.rend();it++)
    {
            if(j==0)
            {
                max1=*it;
            }
            else if(j==1)
            {
                max2=*it;
            }
            else if(j==2)
            {
                max3=*it;
            }
            else{
                break;
            }
            j++;
    }
    if(n>=3)
    {
        cout<<max3;
    }
    else{
        cout<<max1;
    }
}
