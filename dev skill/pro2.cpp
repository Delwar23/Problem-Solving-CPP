#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>vec1;
    vector<int>vec2;
    vector<int>vec3;
    vector<int>vec4;

    int n,a,i,b,c,d,s,p=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        if(s==1)
            vec1.push_back(s);
        if(s==2)
            vec2.push_back(s);
        if(s==3)
            vec3.push_back(s);
        if(s==4)
            vec4.push_back(s);
    }
    a=vec1.size();
    b=vec2.size();
    c=vec3.size();
    d=vec4.size();
    if(c>=a)
    {
        d=d+c;
        a=0;
        p=0;
    }
    else
    {
        d=d+c;
        a=a-c;
    }
    if(b%2!=0)
    {
        if(a!=0)
        {
            a=a-1;
            b=b-1;
        }
        else
        {
            d=d+1;
            b=b-1;
        }
        if(b>=2)
        {
            b=b/2;
            d=d+b;
        }
    }
    else
    {
        if(a>=4)
        {
            p=a%4;
            a=a/4;
            d=d+a;
        }
        else
            d=d+1;
        if(p!=0)
            d=d+1;

    }
    cout<<d<<endl;

}
