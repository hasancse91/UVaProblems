#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int i,tCase,dgt,n;
    long long int val;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>n;

        val=(n*567);
        val=val/9;
        val=val+7492;
        val=val*235;
        val=val/47;
        val=val-498;

        val=val/10;

        dgt=abs(val%10);

        cout<<dgt<<endl;



    }


    return 0;
}
