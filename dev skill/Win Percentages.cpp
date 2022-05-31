#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    double g,gg,p,pp,ss,f;
    cin>>g>>p>>gg>>pp;
    ss=abs((g*p)/100-(gg*pp)/100);
    s=ss;
    f=ss/s;
    if(f>.5)
        cout<<s+1<<endl;
}
