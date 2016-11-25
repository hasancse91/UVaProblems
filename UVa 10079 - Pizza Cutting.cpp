#include<stdio.h>

int main()
{
    long long int n,r;

    while(1)
    {
        scanf("%lld",&n);

        if(n<0)
        break;

        r=(n*(n+1))/2+1;

        printf("%lld\n",r);

    }


    return 0;
}
