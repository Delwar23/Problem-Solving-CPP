#include<stdio.h>
#include<math.h>
int main()
{
    long long int x,y,s;
    while(scanf("%lld%lld",&x,&y)==2)
    {
        if(x>y)
            printf("%lld\n",x-y);
        else
            printf("%lld\n",y-x);
    }
}
