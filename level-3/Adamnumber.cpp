#include<bits/stdc++.h>
using namespace std;
int reverse(int n,int reverse_num)
{
    while(n>0)
    {
        int r=n%10;
        reverse_num=reverse_num*10+r;
        n/=10;
    }
    return reverse_num;
    
}
int main()
{
    int n;
    cin>>n;
    int rev1=reverse(n,0);
    int revsq1=n*n;
    int sq2=rev1*rev1;
    int revsq2=reverse(sq2,0);
    if(revsq1==revsq2)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
}
