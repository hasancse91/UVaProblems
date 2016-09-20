#include<iostream>
#include<cstdio>
#include<cmath>
#define MAX 1000010
#define lim sqrt(MAX)

using namespace std;

bool status[MAX];


void sieve()
{
    int i,j;
    status[0]=1;status[1]=1;

    for(i=2; i<=lim; i++)
    {
        if(status[i]==0)
        {
            for(j=i+i; j< MAX;j+=i)
                status[j]=1;
        }
    }

}

int main()
{
    int m,n,i,dis;

    sieve();

    while(cin>>m>>n)
    {
        int close_f=0,close_s=0,close_dis=0,distance_f=0,distance_s=0,distance_dis=0,dis=0;

        for(i=m; i<=n; i++)
        {
            if(status[i]==0)
            {
                close_f=i;
                close_s=0;
                close_dis=1000010;

                distance_f=i;
                distance_s=0;
                distance_dis=0;

                break;
            }
        }

        for(; i<=n; i++)
        {
            if(status[i]==1)
            dis++;
            else
            {
                if(close_dis>dis)
                {
                    close_s=i;
                    close_dis=dis;
                }

                if(distance_dis<dis)
                {
                    distance_s=i;
                    distance_dis=dis;
                }

                dis=0;
            }
        }

        if(close_f==0 || close_s==0)
        cout<<"There are no adjacent primes.\n";
        else
        printf("%d,%d are closest, %d,%d are most distant.\n",close_f,close_s,distance_f,distance_s);
    }

    return 0;
}
