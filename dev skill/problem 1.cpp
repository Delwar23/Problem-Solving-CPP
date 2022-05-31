#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,j=0,p=0;
    char s[10000];
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        for(i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
                j++;
            else
                p++;
        }
        cout<<p<<endl;
    }
}
