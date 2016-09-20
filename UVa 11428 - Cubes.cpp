#include<iostream>
#include<cmath>


using namespace std;

int main()
{
    int i,j,n,range,flag;

    while(cin>>n && n)
    {
        range=sqrt(n);
        flag=1;

        for(i=1; i<=range; i++)
        {
            for(j=i+1; j<=range; j++)
            {
                if(j*j*j-i*i*i==n)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            break;

        }
        if(flag==1)
        cout<<"No solution"<<endl;
        else
        cout<<j<<" "<<i<<endl;
    }


    return 0;
}
