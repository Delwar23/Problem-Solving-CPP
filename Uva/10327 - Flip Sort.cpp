#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[10000],p,j,i;
    while(scanf("%d",&n)==1)
    {
        p=0;
        for(i=0; i<n; i++)
            scanf("%d",&ar[i]);
        for(j=0; j<n; j++)
            for(i=j+1; i<n; i++)
            {
                if(ar[j]>ar[i])
                    p++;
            }
        printf("Minimum exchange operations : %d\n",p);
    }
}
