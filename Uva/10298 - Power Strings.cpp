#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    int n,i;
    while(cin>>s)

    {
        int j=0,p=0;
        if(s[0]=='.')
            break;
        n=strlen(s);
        for(a=0;a<n;a++)
        for(i=1; i<n; i++)
        {
            if(s[i]==s[a])
                j++;
            else if(s[i]=='b')
                p++;
        }
        if(j>=p)
            printf("%d\n",j);
        else
            printf("%d\n",p);
    }
}
