#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int a;
    while(cin>>a)
    {
        v.push_back(a);
    }
    int n=v[v.size()-1];
   vector<int>first;
   vector<int>second;
   vector<int>ans;
   for(int i=0;i<n;i++)
   {
    first.push_back(v[i]);
   }
   for(int i=n;i<2*n;i++)
   {
    second.push_back(v[i]);
   }
   int j=0,k=0;
   for(int i=0;i<2*n;i++)
   {
    if(i%2==0)
    {
        ans.push_back(first[j]);
        j++;
    }
    else{
         ans.push_back(second[k]);
        k++;
    }
   }
   for(auto it:ans)
   {
    cout<<it<<" ";
   }
   

}
