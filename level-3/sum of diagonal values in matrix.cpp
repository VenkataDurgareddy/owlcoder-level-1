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
    int sume=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                sume=sume+mat[i][j];
            }
        }
        int k=i;
        int h=c-i-1;
        if(k!=h)
        {
        sume=sume+mat[i][c-i-1];
        }
    }
    cout<<sume;

}
