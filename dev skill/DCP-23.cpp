#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,i=1,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        n=(a^b)%c;
        cout<<"Case "<<i<<": "<<n<<endl;
        i++;
    }
}
