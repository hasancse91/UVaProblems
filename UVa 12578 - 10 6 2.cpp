#include<iostream>
#include<cstdio>
#include<cmath>
#define pi acos(-1)

using namespace std;

int main()
{
    int i,n;
    double red,green,len,wid,r;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>len;

        wid=(3/5.0)*len;
        r=len/5.0;

        red=pi*r*r;
        green=(len*wid)-red;

        printf("%.2lf %.2lf\n",red,green);
    }


    return 0;
}
