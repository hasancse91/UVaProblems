#include<iostream>
#include<cmath>
#include<cstdlib>
#define MAX 10000000
#define lim sqrt(MAX)

using namespace std;

bool status[MAX];
int prime[664580];
void sieve()
{
    int i,j;
    status[0]=1;status[1]=1;          //1 denotes not prime

    for(i=3;i<=lim;i+=2)    //even numbers are exclusive
    {
        if(status[i]==0)     //0 denotes prime
        {
            for(j=i*i;j < MAX;j+=i)
                status[j]=1;
        }
    }

    prime[0]=2;
    j=1;
    for(i=3;i < MAX;i+=2)     //even numbers are exclusive
    {
        if(status[i]==0)
            prime[j++]=i;
    }
    //cout<<j-1<<endl;
}

int main()
{
    long long int n,i,j,range,b,flag,max,num;
    sieve();

    while(cin>>n && n)
    {
        if(n<0)
        n=abs(n);

        if(status[n]==0)
        cout<<-1<<endl;
        else
        {
            range=sqrt(n);
            num=n;
            max=0;
            for(i=0; prime[i]<=range && num>1; i++)
            {
                while(num%prime[i]==0)
                {
                    num/=prime[i];
                    max=prime[i];
                }

            }
            cout<<max<<endl;
        }




    }



    return 0;
}

