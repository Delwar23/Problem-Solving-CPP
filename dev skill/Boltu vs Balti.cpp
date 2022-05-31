#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=1,i,b,n,s,ss=1;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=(n*(n+1))/2;
        for(i=1; i<=n; i++)
        {
            ss=ss*i;
        }
        cout<<ss<<endl;
        if(s==ss)
            cout<<"Case "<<a<<"-> YES;"<<endl;
        else
            cout<<"Case "<<a<<"-> NO;"<<endl;
        a++;
    }

}
