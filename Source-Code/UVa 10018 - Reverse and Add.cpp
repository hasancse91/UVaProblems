#include<stdio.h>

long long int rev(long long int a)
{
    long long int sum=0,mod;

    while(a!=0)
    {
        mod=a%10;
        sum=sum*10+mod;
        a=a/10;
    }


    return sum;
}


int main()
{
    long long int i,j,k,l,n,revn,tCase,tmp,cnt;

    scanf("%lld",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%lld",&n);

    cnt=0;

    while(true)
    {
        revn=rev(n);

        if(revn!=n)
        {
            n=n+revn;
            cnt++;
        }
        else
        break;

    }


    printf("%lld %lld\n",cnt,revn);

    }


    return 0;
}
