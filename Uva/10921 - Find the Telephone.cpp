#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[1000];
    int i,n;
    while(gets(x))
    {
        n=strlen(x);
        for(i=0; i<n; i++)
        {
            if(x[i]=='A'||x[i]=='B'||x[i]=='C')
                printf("2");
            else if(x[i]=='D'||x[i]=='E'||x[i]=='F')
                printf("3");
            else if(x[i]=='G'||x[i]=='H'||x[i]=='I')
                printf("4");
            else if(x[i]=='J'||x[i]=='K'||x[i]=='L')
                printf("5");
            else if(x[i]=='M'||x[i]=='N'||x[i]=='O')
                printf("6");
            else if(x[i]=='P'||x[i]=='Q'||x[i]=='R'||x[i]=='S')
                printf("7");
            else if(x[i]=='T'||x[i]=='U'||x[i]=='V')
                printf("8");
            else if(x[i]=='W'||x[i]=='X'||x[i]=='Y'||x[i]=='Z')
                printf("9");
            else
                printf("%c",x[i]);

        }
        printf("\n");

    }
}
