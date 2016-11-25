#include<iostream>
#include<cmath>
#include<cstring>
#define number 100000

using namespace std;

bool status[number+10];
int prime[32000],add=0;

void sieve()
{
    int range,i,j;
    memset(status,1,sizeof(status));


    for(i=2; i*i<=number; i++)
    {
        if(status[i])
        {
            for(j=i+i; j<=number; j=j+i)
                status[j]=0;
        }

    }
    for(i=2; i<=number; i++)
        if(status[i])
            prime[add++]=i;
    //cout<<prime[add-1]<<" "<<add<<endl;

}

int dig_sum(int num)
{
    int sum=0;

    while(num!=0)
    {
        sum=sum+num%10;
        num/=10;
    }

    //cout<<sum<<endl;

    return sum;
}

int fact_sum(int num)
{
    int i=0,j,sum=0,n=num,range=sqrt(num);

    while(num!=1  && i<=9000)
    {
        if(num%prime[i]==0 && prime[i]<=range)
        {
            sum=sum+dig_sum(prime[i]);
            num=num/prime[i];

            //cout<<prime[i]<<" ";

        }
        else
        i++;

    }
    //cout<<endl;

    //cout<<sum<<"** "<<dig_sum(num)<<endl;

    if(n==num)
    sum=0;
    else if(num>1)
    sum+=dig_sum(num);

    //cout<<sum<<" "<<num<<endl;
    //cout<<sum<<endl;


    return sum;
}

int main()
{
    int i,j,n,num,t,tCase;

    sieve();

    //t=fact_sum(worst);
    //cout<<dig_sum(worst)<<endl;

    cin>>tCase;

    while(tCase--)
    {
        cin>>num;
        n=num;

        for(i=n+1; ; i++)
        {
            int digsum=dig_sum(i);
            int factsum=fact_sum(i);

            //if(i==1)
            //cout<<"i: "<<i<<" Digit sum: "<<digsum<<" Fact sum: "<<factsum<<endl;

            if(factsum==digsum)
            {
                cout<<i<<endl;
                break;
            }
        }

    }


    return 0;
}


/*
10
123423
345332
456456
23
434535
999
234523
233232
45454
54645


123464
345343
456502
27
434542
1086
234562
233257
45495
54654
*/
