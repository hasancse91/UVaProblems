#include<iostream>

using namespace std;

int main()
{
    int i,tCase,a,b,res,sum,sub;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>sum>>sub;

        if(sum>=sub && (sum+sub)%2==0)
        {
            a=(sum+sub)/2;
            b=sum-a;

            if(a>b)
            cout<<a<<" "<<b<<endl;
            else
            cout<<b<<" "<<a<<endl;
        }
        else
        cout<<"impossible"<<endl;

    }


    return 0;
}
