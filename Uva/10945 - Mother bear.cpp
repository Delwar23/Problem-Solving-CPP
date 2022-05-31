#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    char ss[1000],p[1000];
    int i,j,k;
    while(1)
    {
        gets(s);
        if(!strcmp(s,"DONE"))
            break;
        j=0;
        i=0;
        for(i=0; i<s[i]!=NULL; i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                ss[j]=s[i];
                j++;
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                ss[j]=s[i]+32;
                j++;
            }
        }
        ss[j]=NULL;
        j=j-1;
        for(i=0; ss[i]!=NULL; i++)
        {
            p[i]=ss[j];
            j--;
        }
        p[i]=NULL;
        if(!strcmp(ss,p))
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;

    }
}
