#include<iostream>

using namespace std;

int main()
{
    int tCase,a,b,res;

    cin>>tCase;

    while(tCase--)
    {
        cin>>a>>b;

        res=b^(b>>1);

        cout<<res<<endl;
    }

    return 0;
}
