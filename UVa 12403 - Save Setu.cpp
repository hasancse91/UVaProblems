#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t,tCase,i,j,k,account=0,op,donation;
    string ins;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>ins;

        if(ins=="donate")
        {
            cin>>donation;
            account+=donation;
        }
        else
            cout<<account<<endl;

    }


    return 0;
}

