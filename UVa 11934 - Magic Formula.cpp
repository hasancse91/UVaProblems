#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d,L,res,i,temp;

    while(cin>>a>>b>>c>>d>>L && (a||b||c||d||L))
    {
        res=0;
        for(i=0; i<=L; i++)
        {
            temp=a*i*i + b*i + c;

            if(temp%d==0)
            res++;
        }

        cout<<res<<endl;

    }


    return 0;
}

