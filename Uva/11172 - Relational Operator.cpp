#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&x,&y);
        if(x>y)
            printf(">\n");
        else if(x<y)
            printf("<\n");
        else
            printf("=\n");
    }
}
