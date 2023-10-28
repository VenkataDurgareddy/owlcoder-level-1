#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }
    int max=INT_MIN;
    for(int i=0;i<c;i++)
    {
        vector<int>v;
        for(int j=0;j<r;j++)
        {
            v.push_back(mat[j][i]);
        }
        sort(v.begin(),v.end());
        cout<<v[v.size()-1]<<endl;
    }

}
