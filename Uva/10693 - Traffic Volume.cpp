#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,l,f;
    while(1)
    {
        cin>>l>>f;
        if(l==0&&f==0)
            break;
        a=sqrt(2*l*f);
        b=(a*3600)/(2*l);
        cout<<setprecision(8)<<fixed<<a<<" ";
        cout<<setprecision(8)<<fixed<<b<<endl;;
    }
}
