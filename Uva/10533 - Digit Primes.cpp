#include<bits/stdc++.h>
#define ll long long int
long long int p[1000005];
long long int pp[1000005];
using namespace std;
int main()
{
    ll i,j,n,t,a,s;
    p[0]=p[1]=1;
    for(i=2; i<1000000; i++)
    {
        if(p[i]==0)
        {
           // cout<<i<<endl;
            for(j=i+i; j<1000000; j=j+i)
                p[j]=1;
        }
    }
    vector<ll> v;
    v.push_back(2);
    for(i=3; i<1000000; i+=2)
    {
        if(p[i]==0)
        {
            //cout<<i<<endl;
            s=0;
            a=i;
            while(a>0)
            {
                s=s+a%10;
                a=a/10;
            }
            if(p[s]==0)
            {
                v.push_back(i);
               // cout<<i<<endl;
            }
        }
    }
    //for(auto i:v) cout<<i<<endl;
    scanf("%lld",&t);
    while(t--)
    {
        ll j=0,m;
        scanf("%lld %lld",&n,&m);
        ll d1=upper_bound(v.begin(),v.end(),m)-v.begin();
        ll d2=(lower_bound(v.begin(),v.end(),n)-v.begin());
        //cout<<d1<<" "<<d2<<endl;
        printf("%lld\n",(d1-d2));
    }
}
