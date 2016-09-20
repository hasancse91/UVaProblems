#include<stdio.h>

int main()
{
    long long int i,n,c;

    while(1)
    {
        long long int a=0,b=1;

        scanf("%lld",&n);
        if(n==0)
        break;

        for(i=1; i<=n; i++)
            {
                c=a+b;
                a=b;
                b=c;
            }

    printf("%lld",c);
    printf("\n");

    c=0;

    }






    return 0;
}
