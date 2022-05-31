#include<stdio.h>
int main()
{
    long long int t,n,a,b,c,s,j,i;
    while(scanf("%lld",&t)==1)
    {
        for( i=0; i<t; i++)
        {
            s=0;
            scanf("%lld",&n);
            for( j=0; j<n; j++)
            {
                scanf("%lld%lld%lld",&a,&b,&c);
                if(b==0)
                    continue;
                s+=(a*c);

            }
            printf("%lld\n",s);
        }
    }
    return 0;
}
