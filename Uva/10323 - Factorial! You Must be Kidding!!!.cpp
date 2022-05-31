#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,s=1,n;
    while(cin>>n)
    {
        s=1;
        //cout<<n%2<<endl;
        if(n==-1)
            cout<<"Overflow!"<<endl;
        else if(n<0&&n%2==-1)
            {
                cout<<"Overflow!"<<endl;
                continue;
            }
            for(i=1; i<=n; i++)
        {

            s=s*i;
            if(s>6227020800)
            {
                //cout<<"Overflow!"<<endl;
                break;
            }

        }
       // cout<<s<<endl;
        if(s>6227020800)
        {
            cout<<"Overflow!"<<endl;
            //break;
        }
        else if(s<10000&&n!=-1)
            cout<<"Underflow!"<<endl;
        else if(n!=-1)
            cout<<s<<endl;
    }
}
