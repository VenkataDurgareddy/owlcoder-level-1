#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int sub=abs(n-m);
        if(sub<=10)
        {
            cout<<sub<<endl;
        }
        else{
            if(sub%10==0)
            {
                cout<<sub/10<<endl;
            }
            else{
                cout<<(sub/10)+1<<endl;
            }
        }

    }
}
