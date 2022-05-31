#include<bits/stdc++.h>
using namespace std;
#define n 20000008
bool prime[n];
int tprime[20000010];
#define cover(a,d) memset(a,d,sizeof(a))
bool p[n];
void sive()
{
    prime[1]=0;

    long long int i,j,k=1;
    for(i=3; i<sqrt(n); i++)
    {
        if(prime[i]!=0)
        {
            for(j=i+i; j<n; j=j+2*i)
            {
                prime[j]=0;
            }
        }
    }
}
void twin()
{
    int j=1,i;
    for(i=3; i<n; i++)
    {
        if(p[i]!=0&&p[i+2]!=0)
        {
            tprime[j]=i;


            j++;
        }
    }
}
int main()
{
cout<<tprime[2];
    cover(prime,0);
    sive();
    twin();
    long long int nn;
    while(cin>>nn)
    {
        cout<<"("<<twin[nn]<<", "<<twin[nn]+2<<")"<<endl;
    }
}
