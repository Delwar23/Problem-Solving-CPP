#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p=0;
    cin>>n;
    char s[1000];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(s[i]==s[j])
                p++;
        }
        if(p==1)
        {
            cout<<s[i]<<endl;
            break;
        }

        else
            p=0;
    }
    if(p!=1)
        cout<<"-1"<<endl;

}
