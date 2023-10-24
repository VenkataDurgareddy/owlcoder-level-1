#include<bits/stdc++.h>
using namespace std;
bool isugly(int n)
{
    if(n<=0)
    {
        return false;
    }
    while(n%2==0)
    {
        n=n/2;
    }
    while(n%3==0)
    {
        n=n/3;
    }
    while(n%5==0)
    {
        n=n/5;
    }
    return n==1;

}
int main()
{
    int n;
    cin>>n;
    if(isugly(n))
    {
        cout<<"Ugly Number";
    }
    else{
        cout<<"Not Ugly Number";
    }
    
}
