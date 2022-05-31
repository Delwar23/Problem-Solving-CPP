#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n,j= 1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<"Case #"<<j<<": ";
        j++;
        while(n>=1)
        {
            int r=n%2;
            if(r==1)
                cout<<1;
            else
                cout<<0;
            n=n/2;
        }
        cout<<endl;
    }

    return 0;
}
