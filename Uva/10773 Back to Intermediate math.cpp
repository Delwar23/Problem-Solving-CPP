#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double d,v,u,tm,ts;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf",&d,&v,&u);
        if(v>=u)
            printf("Case %d: can't determine\n",i);
        else
        {
            tm=d/u;
            ts=d/sqrt(u*u-v*v);
            if(tm==ts)
                printf("Case %d: can't determine\n",i);
            else
                printf("Case %d: %.3lf\n",i,fabs(tm-ts));
        }
    }
    return 0;
}
