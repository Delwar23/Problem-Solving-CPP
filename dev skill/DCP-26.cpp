#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s,i;
        getline(cin,s);
        reverse(s.begin(),s.end());
        cout<<s;
        cout<<endl;
    }
}
