#include<iostream>

using namespace std;

int main()
{
    int gcd,lcm,n,tCase;

    cin>>tCase;

    while(tCase--)
    {
        cin>>gcd>>lcm;

        if(lcm%gcd==0)
        cout<<gcd<<" "<<lcm<<endl;
        else
        cout<<"-1\n";
    }


    return 0;
}
