#include<stdio.h>

int main()
{
    long long int s,d,i,sum;

    while(scanf("%lld %lld",&s,&d)==2)
    {
        i=s;
        sum=i;
        while(sum<d)
        {
            i++;
            sum=sum+i;

        }

        printf("%lld\n",i);
    }


    return 0;
}
