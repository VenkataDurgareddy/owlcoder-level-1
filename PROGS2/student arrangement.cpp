#include <bits/stdc++.h>

using namespace std;

#define ll long long int


 

void printFrequency(vector<ll>vec, ll k, ll m, ll n)

{

 

map<ll, ll> ma;

    for(ll i=1;i<m+1; i++)

    ma[i]=0; //it will store all the rows

    ll ans=0;

    for(ll i=0; i<n; i++){

        if(ma.size()==0){

            ans+=(n-i); // if all the rows are fulled than we will add ans in remaing one.

            break;

        }

        auto it= ma.lower_bound(vec[i]); // first we will check if the desried row is there or not.

        if(it==ma.end())

        it=ma.begin(); // if it's not than we will make the iterator to begin.


 

        if(it->first!=vec[i]){ // now if the begin element does'nt match than we will and ++ to ans

            ans++;

            (it->second)++; // update the map value.

        }

        else

        it->second++; // update the map value without updating the ans

        if(it->second==k) // if the row is fulled than ans than erease it.

        ma.erase(it);

    }

    cout<<ans<<endl;

 

 

}



 

int main(){

    ll n,m,k;

    cin>>n>>m>>k;

    vector<ll>v;

    for(ll i=0; i<n; i++){

        ll num; cin>>num;

        v.push_back(num);

    }

    printFrequency(v,k,m,n);

}
