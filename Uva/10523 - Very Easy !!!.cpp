#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int s=0,n,a;
    while(scanf("%lld %lld",&n,&a)==2)

    {
        for(int i=1; i<=n; i++)
        {
            s=s+(i*pow(a,i));
        }
        printf("%lld\n",s);
        s=0;
    }
    return 0;
}


