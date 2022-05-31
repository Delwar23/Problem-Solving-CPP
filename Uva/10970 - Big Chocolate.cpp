#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            break;
        cout<<a*b-1<<endl;
    }
}
