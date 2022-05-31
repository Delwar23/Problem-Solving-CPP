#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int i,j,a,b,ans,s;
    while(cin>>a>>b)
    {
        b=b-1;
        s=a/b;
        ans=a+s;
        if(a%b==0)
        cout<<ans-1<<endl;
        else
            cout<<ans<<endl;
    }
}
