#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll b,j=1;
    ll n,m,i;

    while(cin>>n>>m)
    {
        vector<ll>v;
        if(n==0&&m==0)
            break;
        ll a[n+5];
        ll b[m+5];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            v.push_back(a[i]);
        }
        for(i=0; i<m; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
       // sort(v.begin(),v.end());
        ll p=0,ans=0;
        cout<<"CASE# "<<j<<":"<<endl;;
        j++;
        for(i=0; i<m; i++)
        {
            if(binary_search(a,a+n,b[i]))
            {
                cout<<b[i]<<" found at ";
                ans=lower_bound(a,a+n,b[i])-a;
                cout<<ans+1<<endl;
            }
            else
                cout<<b[i]<<" not found"<<endl;
        }
    }
}
