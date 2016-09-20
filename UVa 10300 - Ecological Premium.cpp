#include<iostream>

using namespace std;

int main()
{
    int i,t,tCase,n,sz,ani,fr,res;

    while(cin>>tCase)
    {
        for(t=1; t<=tCase; t++)
        {
            res=0;
            cin>>n;
            for(i=1; i<=n; i++)
            {
                cin>>sz>>ani>>fr;

                res=res+(sz*fr);
            }
            cout<<res<<endl;
        }
    }


    return 0;
}
