#include<iostream>
#include<cmath>
#define sz 1000100
#define lim 1010

using namespace std;

int a[sz],prm[sz],fact[sz],max_prime,arr[sz];

void sieve()
{
    int i,j;
        a[0]=1;a[1]=1;//1 denotes not prime
        for(i=2;i<=lim;i++)
        {
                if(a[i]==0)//0 denotes prime
                {
                        for(j=i*i;j<sz;j+=i)
                        {
                                a[j]=1;
                        }
                }
        }
        j=0;
        for(i=2;i<sz;i++)
        {
                if(a[i]==0)
                        prm[j++]=i;
        }
        //cout<<prm[j-1]<<endl;
        max_prime=j;
}


int factors(int num)
{
    int i,tmp,cnt,res;
    res=0;

    for(i=0;prm[i]<=num && num; i++)
    {
        if(a[num]==0)
        {
            res++;
            break;
        }
        while(num%prm[i]==0)
        {
            res++;
            num/=prm[i];
        }
    }
    return res;
}



int main()
{
    int n,i,j,add=0,temp;
    sieve();

    arr[0]=0;
    arr[1]=0;
    arr[2]=1;

    for(i=3; i<=1000000; i++)
    {
        arr[i]=arr[i-1]+factors(i);
    }


    while(cin>>n)
    {
        cout<<arr[n]<<endl;
    }


    return 0;
}
