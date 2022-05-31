#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s,ss;
    while(scanf("%d",&n)==1)
    {
        ss=n;
        for(i=n; i>=3; i=(i/3)+(i%3))
        {
            ss=ss+i/3;
        }
        if(i==2)
            ss++;
        printf("%d\n",ss);
    }
}
