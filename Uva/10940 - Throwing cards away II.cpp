#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll i,n,nt;
    map<ll,ll>mp;
    mp[1]=1;
    mp[2]=2;
    nt=2;
    for(i=2; i<=500000; i++)
    {
        if(i<nt)
        {
            nt=2;
        }
        mp[i]=nt;
        nt+=2;
    }
    while(cin>>n)
    {
        if(n==0)
            break;
        else
            cout<<mp[n]<<endl;
    }
}
