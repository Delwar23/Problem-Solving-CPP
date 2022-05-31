#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,ar[1000],p,a;
    double s,n,sum,su;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            p=0;
            sum=0;
            su=0;
            cin>>n;
            for(j=0; j<n; j++)
            {
                cin>>ar[j];
                sum=sum+ar[j];
            }
            su=sum/j;
            for(a=0; a<n; a++)
            {
                if(ar[a]>su)
                    p++;
            }
            s=(p*100)/n;
            printf("%.3lf%%\n",s);
        }

    }

}
