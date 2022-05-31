#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    //cout<<12<<endl;
    ll i,j,n,m;
    string s,ss;
    cin>>s>>ss;
    // i=1,j=0;
    ll a[10000][10000];
    //a[0][0]=0;
    n=s.size();
    ////  cout<<a[0][0]<<endl;
    m=ss.size();
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i==0||j==0)
            {
                a[i][j]=0;
            }
            else if(s[i-1]==ss[j-1])
            {
                a[i][j]=a[i-1][j-1]+1;
            }
            else
            {
                a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
        }

    }
    cout<<a[n][m]<<endl;

}
