#include<bits/stdc++.h>
using namespace std;
long long int p[1000005];
int main()
{
    int i,j;
    p[0]=0;
    p[1]=0;
    for(i=2; i<100000; i++)
    {
        if(p[i]==0)
        {
            for(j=i+i; j<1000000; j=j+i)
                p[j]=1;
        }
    }
    long long int n,k=0,s=0;
    while(cin>>n)
    {
        k=0;
        // cin>>n;

        if(n==0)
            break;
        else
        {
            cout<<n<<":"<<endl;
            for(i=2; i<=n/2; i++)
            {
                if(p[i]==0)
                {
                    j=n-i;
                    if(p[j]==0)
                    {
                        s=i+j;
                        if(s==n)
                        {
                            k=1;
                            break;
                        }
                    }
                }
            }
//            if(k==1)
//                break;
        }
        if(k==1)
            cout<<i<<"+"<<j<<endl;
        else
            cout<<"NO WAY!"<<endl;
    }
}
