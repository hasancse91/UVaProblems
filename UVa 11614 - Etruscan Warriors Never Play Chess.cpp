#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int i,j,tCase;
    long long int n,sum;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>sum;

        n=(sqrt(1+8*sum)-1)/2;

        cout<<n<<endl;
    }




    return 0;
}
