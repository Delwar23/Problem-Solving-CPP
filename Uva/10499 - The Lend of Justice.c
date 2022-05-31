#include<stdio.h>
int main()
{
    long long int n,s;
    while(scanf("%lld",&n)==1 && n>=0)
    {
        if(n==1)
            printf("0%%\n");
        else
        {
            s=n*100/4;
            printf("%lld%%\n",s);
        }

    }
    return 0;
}
