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
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum=sum+mat[i][j];
        }
        if(max<sum)
        {
            max=sum;
        }
    }
    cout<<max;

}
