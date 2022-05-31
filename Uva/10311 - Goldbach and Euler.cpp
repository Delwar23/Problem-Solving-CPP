#include<bits/stdc++.h>
using namespace std;
long long int arr[1000005];
int main()
{
    long long int i,j,n,x;
    for(i=2; i*i<=1000005; i++)
    {
        if(arr[i]==0)
        {
            for(j=i+i; j<=1000005; j+=i)
                arr[j]=1;
        }
    }
    while(scanf("%lld",&x)==1)
    {
        n=0;
        if(x%2!=0||x==2)
            printf("%lld is not the sum of two primes!\n",x);
        else
        {
            for(j=2; j<=1000005; j++)
            {
                if(arr[j]==0&&arr[x-j]==0)
                {
                    n=1;
                    printf("%lld is the sum of %lld and %lld.\n",x,j,x-j);
                    break;
                }
            }

        }
    }}
