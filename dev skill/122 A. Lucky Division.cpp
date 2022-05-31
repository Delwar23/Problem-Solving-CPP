#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,a[10]= {4,7,47,74,447,474,477,774,747,744};
    scanf("%d",&n);
    for(i=0; i<10; i++)
    {
        if(n==a[i]||n%a[i]==0)
        {
            printf("YES\n");
            break;
        }

        else
            j++;
    }
    if(j==10)
        printf("NO\n");
    return 0;
}
