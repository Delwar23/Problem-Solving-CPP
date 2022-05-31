#include<stdio.h>
#include<string.h>
int main()
{
    int i,s=0,e=0,I=0,g=0,f=0,t=0,n,j,l;
    scanf("%d",&n);
    char a[1000],x[1000];
    for(i=1; i<=n; i++)
    {
        gets(a);
        l=strlen(a);
          for(j=0; j<=l; j++)
        {
            if(a[i]==' ')
                break;
            else
                x[i]=a[i];

        }
        if(!strcmp(x,"Spain"))
            s++;
        else if(!strcmp(x,"England"))
            e++;
        else if(!strcmp(x,"Italy"))
            I++;
        else if(!strcmp(x,"Germany"))
            g++;
        else if(!strcmp(x,"France"))
            f++;
        else if(!strcmp(x,"Turkey"))
            t++;
    }

    if(s!=0)
    {
        printf("Spain %d\n",s);
    }
    if(e!=0)
    {
        printf("England %d\n",e);
    }
    if(I!=0)
    {
        printf("Italy %d\n",I);
    }
    if(g!=0)
    {
        printf("Germany %d\n",g);
    }
    if(f!=0)
    {
        printf("France %d\n",f);
    }
    if(t!=0)
    {
        printf("Turkey %d\n",t);
    }
}
