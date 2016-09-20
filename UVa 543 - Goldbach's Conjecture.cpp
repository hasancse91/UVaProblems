#include<iostream>
#include<cmath>

using namespace std;

bool status[1100002];
int prime[78500];
void siv()
{
    int N=1000000,i,j,add=1;
    int sq=sqrt(N);
    prime[0]=2;

    for(i=4;i<=N;i+=2)
        status[i]=1;


    for(i=3;i<=sq;i+=2)
    {
        if(status[i]==0)
        {
            for(j=i*i;j<=N;j+=i)
            status[j]=1;

            prime[add++]=i;
        }
    }
    status[1]=1;

}

int main()
{
    int n,i,j,range,b,flag;
    siv();

    while(cin>>n && n)
    {
        range=sqrt(n);
        flag=0;

        for(i=0; i<=range; i++)
        {
            b=n-prime[i];
            if(status[b]==0)
            {
                cout<<n<<" = "<<prime[i]<<" + "<<b<<endl;
                flag=1;
                break;
            }
        }

        if(flag==0)
        cout<<"Goldbach's conjecture is wrong.\n";

    }



    return 0;
}
