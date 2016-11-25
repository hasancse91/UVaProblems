#include<iostream>

using namespace std;

int main()
{
    int a,b,c,tCase,i,mid,temp;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>a>>b>>c;

        if(a<b && a>c || a>b && a<c)
        mid=a;
        else if(b<a && b>c || b>a && b<c)
        mid=b;
        else
        mid=c;

        cout<<"Case "<<i<<": "<<mid<<endl;

    }

    return 0;
}
