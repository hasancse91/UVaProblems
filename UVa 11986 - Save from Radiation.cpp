#include<iostream>
#include<cmath>

using namespace std;

long long int power (int base, int p)
{
    long long int ret = 1;

    for ( int i = 1; i <= p; i++ ) ret *= base;

    return ret;
}

int main()
{
    int tCase,i,j,t;
    long long int n;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>n;
        i=0;

        while(true)
        {
            if((n+1)<=power(2,i))
            {
                break;
            }
            i++;
        }

        cout<<"Case "<<t<<": "<<i<<endl;
    }

    return 0;
}
