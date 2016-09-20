#include<iostream>

using namespace std;

int main()
{
    long long int a,b,c,i,n,fst,sec,sum,x,y;

    while(cin>>n)
    {
        if(n==-1)
        break;

        a=0;
        b=1;
        x=0;
        y=1;
        sum=1;

        for(i=1; i<n; i++)
        {
            c=a+b;
            a=b;
            b=c;

            sum+=c;

        }

        fst=sum;
        sec=sum+a+b;

        if(n==0)
        {
            fst=0;
            sec=1;
        }

        cout<<fst<<" "<<sec<<endl;


    }


    return 0;
}
