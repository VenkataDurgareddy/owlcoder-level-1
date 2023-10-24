#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
       v.push_back(k);
    }
    sort(v.begin(),v.end());
    int num;
    cin>>num;
    cout<<v[(v.size())-num];

}
