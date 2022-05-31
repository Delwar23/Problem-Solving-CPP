#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,k;
    while(scanf("%d%d",&n,&k)==2)
    {
        s=n;
        while(s>=k)
        {

            n=n+int(s/k);
            s=s%k+int(s/k);
        }
        printf("%d\n",n);
    }
}
