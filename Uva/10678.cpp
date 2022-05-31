#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0)
int main()
{
    double i,t,a,b,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        a=a/2;
        b=b/2;
        s=sqrt(b*b-a*a);
        printf("%.3lf\n",pi*b*s);
    }
}
