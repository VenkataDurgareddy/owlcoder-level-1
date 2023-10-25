#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mat1[n][n];
    int mat2[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat2[i][j];
        }
    }
    int sub[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sub[i][j]=abs(mat1[i][j]-mat2[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==n-1)
            {
                cout<<sub[i][j];
            }
            else{
                cout<<sub[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
