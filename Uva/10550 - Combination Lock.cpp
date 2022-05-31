#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll f,s,t,l,ans;
    while(1)
    {
        cin>>f>>s>>t>>l;
        if(s==0&&f==0&&t==0&&l==0)
            break;
        ans=(1080+((f-s+40)%40+(t-s+40)%40+(t-l+40)%40)*9);
        cout<<ans<<endl;
    }
}
