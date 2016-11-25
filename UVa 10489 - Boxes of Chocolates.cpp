#include<iostream>

using namespace std;

int main()
{
    int tCase,i,j,n,b,k,choc,m;
    long long int total,res;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>n>>b;

        total=1;
        res=0;

        for(m=1; m<=b; m++)
        {
            cin>>k;
            total=1;
            for(j=0; j<k; j++)
            {
                cin>>choc;
                total=(total*choc)%n;
            }

            res=res+total;

        }

        res=res%n;

        cout<<res<<endl;

    }


    return 0;
}
