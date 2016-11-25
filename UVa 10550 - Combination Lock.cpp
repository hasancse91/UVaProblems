#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d,sum;

    while(cin>>a>>b>>c>>d)
    {

        if(!a && !b && !c && !d)
        break;
        sum=1080;

        if(a<b)
        sum+=(40-b+a)*9;
        else
        sum+=(a-b)*9;

        if(b>c)
        sum+=(40-b+c)*9;
        else
        sum+=(c-b)*9;

        if(c<d)
        sum+=(40-d+c)*9;
        else
        sum+=(c-d)*9;

        cout<<sum<<endl;
    }

    return 0;
}
