#include<bits/stdc++.h>
#include<string.h>
using namespace std;N
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s,j;
        getline(cin,s);
        j=s;
        reverse(s.begin(),s.end());
        if(j==s)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
