#include<bits/stdc++.h>
using namespace std;
bool valid(string s)
{
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' or s[i]=='{' or s[i]=='[')
        {
            st.push(s[i]);
        }
        else{
            if(st.empty())
            {
                return false;
            }
            char c=st.top();
            if((s[i]==')' and c!='(') or (s[i]=='}' and c!='{') or (s[i]==']' and c!='['))
            {
                return false;
            }
            st.pop();
    }
    }
    return st.empty();
}
int main()
{
    string s;
    cin>>s;
    bool result=valid(s);
    if(result==1)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
