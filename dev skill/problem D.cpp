#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,j=0,p=0,a;
    char s[10000];
    cin>>t;
    while(t--)
    {
        p=0;
        j=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>s[i];
        }

        for(i=0; i<n; i++)
        {
            if(p<s[i])
            {
                p=s[i];
                a=i;
            }
        }
        for(i=0; i<n-1; i++)
        {
            if(s[a]!=s[i])
                j++;
            else
                p++;
        }
        cout<<j<<endl;
    }
}
