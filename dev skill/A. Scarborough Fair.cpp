#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define forit(i, a) for ( __typeof( (a).begin() ) i = (a).begin(); i != (a).end(); i++ )
string rep(string str, char ch1, char ch2, ll a, ll b)
{
    for (int i = a-1; i <= b-1; ++i)
    {
        if (str[i] == ch1)
        {
            str[i] = ch2;
            //  cout<<ch2<<endl;
        }
        //  cout<<str[i]<<endl;

    }

    return str;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, m, n, a, b,c,x, j,i, k;
    char ch1, ch2;
    string st, str;
    cin>>t>>m;
    cin>>st;
    while(m--)
    {
        cin>>a>>b>>ch1>>ch2;
        st=rep(st,ch1,ch2, a, b);

    }
    cout<<st<<endl;
}
