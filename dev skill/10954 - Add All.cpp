#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],ss[1000],p=1,i;
    ss[0]=0;
    while(scanf("%d",&n)==1)
    {
        long long int s=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+i);
        for(i=0; i<n; i=i+2)
        {

            s=a[i]+a[i+1];
            ss[p]=s;

            p++;
        }

        cout<<ss<<endl;
    }
}
