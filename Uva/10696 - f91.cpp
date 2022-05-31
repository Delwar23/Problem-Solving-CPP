#include<stdio.h>
int main()
{
    int n,i,s;
    for(;;)
    {
        s=0;
        scanf("%d",&n);
        if(n==0)
            break;
        else if(n>100)
        {
            s=n-10;
            printf("f91(%d) = %d\n",n,s);
        }
        else
            printf("f91(%d) = 91\n",n);

    }

}
