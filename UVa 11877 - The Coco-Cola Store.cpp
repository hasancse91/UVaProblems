#include<iostream>

using namespace std;

int main()
{
    int i,j,n,mod,temp,res;

    while(cin>>n && n)
    {
        res=0;

        while(n>=3)
        {
            res=res+n/3;
            n=n/3+n%3;
        }

        if(n%3==2)
        cout<<res+1<<endl;
        else
        cout<<res<<endl;

    }


    return 0;
}
