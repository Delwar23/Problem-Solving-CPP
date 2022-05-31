#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,n,p,j,l;
    string s,t;
    while(cin>>s>>t)
    {
        p=0;
        n=t.size();
        l=s.size();
        for( j=0; j<l; j++)
        {
            for(i=0; i<n; i++)
            {
                if(s[j]==t[i])
                {
                    p++;
                    j++;
                }
            }
        }
        if(p==l)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
