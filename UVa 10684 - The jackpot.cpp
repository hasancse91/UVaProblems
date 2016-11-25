#include<iostream>

using namespace std;

int main()
{
    long long int n,val,i,j,tk,max;

    while(cin>>n && n)
    {
        tk=0;
        max=-10000000;

        for(i=1; i<=n; i++)
        {
            cin>>val;
            tk+=val;

            if(max<tk)
            max=tk;

            if(tk<0)
            tk=0;
        }

        if(tk>0)
        cout<<"The maximum winning streak is "<<max<<"."<<endl;
        else
        cout<<"Losing streak.\n";
    }


    return 0;
}
