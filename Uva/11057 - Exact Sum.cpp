#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[1000],i,s[1000],j,a[1000],r[1000];
    while(scanf("%d",&t)==1)
    {
        p=0;
        for(i=0; i<t; i++)
            scanf("%d",&ar[i]);
        scanf("%d",&n);
        for(i=0; i<t; i++)
        {
            for(j=1; j<t; j++)
            {
                s[i]=ar[i]+ar[j];
                if(s[i]==n)
                {
                    r[p]=s[i];
                    a[p]=ar[i]-ar[j]
                         p++;
                }
            }
        }
        sort(a,a+p)
        for(i=0; i<p; i++)

        }
}
