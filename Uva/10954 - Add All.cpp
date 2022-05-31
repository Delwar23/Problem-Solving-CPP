#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define ll long long int
int main()
{
    ll i,j,n,t,s=0,p=0;
    while(cin>>n)
    {
        if(n==0)
            break;
        ll a[n];
        //  cin>>a[0];
        // s=a[0];

        j=1;
        s=0;
        ll ans=0;
       priority_queue<ull,vector<ull>, greater<ull> >st;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            st.push(a[i]);

        }
        //sort(a,a+n);
        //map<ll,ll>mp;
        //s=a[0];
        while(!st.empty())
        {
            s=st.top();
            st.pop();
            if(st.empty())
                break;
            s=s+st.top();
            st.pop();
            ans=ans+s;
            st.push(s);
        }
        cout<<ans<<endl;
    }
}
