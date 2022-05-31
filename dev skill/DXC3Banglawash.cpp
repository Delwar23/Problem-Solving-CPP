#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,p,q,x,y,t,m;
    cin>>t;
    while(t--)
    {
        m=0;
        cin>>a>>b>>c>>d;
        //cout<<endl;
        cin>>p>>q>>x>>y;
        if((a+b)>(c+d))
            m++;
        if((p+q)>(x+y))
            m++;
        if(m==2)
            cout<<"Banglawash"<<endl;
        else
            cout<<"Miss"<<endl;
    }
}
