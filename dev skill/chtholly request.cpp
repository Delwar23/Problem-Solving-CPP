#include <iostream>
using namespace std;

int main()
{
    int n, num,m,a=0,sum=0,i,ii,digit, rev = 0,p[10000];
    cin >> num>>m;
    for(i=1; i<10000; i++)
    {
        ii=i;
        do
        {
            digit = ii % 10;
            rev = (rev * 10) + digit;
            ii =  ii/ 10;
        }
        while (ii != 0);
        if (n == rev)
        {
            p[a]=n;
            a++;
        }
    }
    for(i=0; i<num; i++)
    {
        sum=sum+p[i];
    }
    cout<<sum/m<<endl;

}
