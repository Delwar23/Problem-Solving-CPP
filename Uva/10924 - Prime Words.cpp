#include<bits/stdc++.h>
using namespace std;
long long p[10000];
int main()
{
    int i,j;
    for(i=2; i<10000; i++)
    {
        if(p[i]==0)
        {
            for(j=i+i; j<10000; j=j+i)
                p[j]=1;
        }
    }
    string s;
    long long int ss,pp;
    while(cin>>s)
    {
        ss=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                pp=s[i]-'0'-48;
                ss=ss+pp;
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                pp=s[i]-'0'-16;
                ss=ss+pp+26;

            }
        }
        if(p[ss]==0)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }

}
