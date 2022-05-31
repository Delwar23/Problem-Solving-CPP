#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n=0;
    char ss[1000],s[1000];
    gets(s);
    for( i=0; i<strlen(s); i++)
    {
        if(s[i]>='1'&&s[i]<='9')
        {
            ss[n++]=s[i];
        }
    }
    sort(ss,ss+n);
    cout<<ss[0];
    for( i=1; i<n; i++)
    {
        cout<<"+"<<ss[i];
    }
    cout<<endl;
}
