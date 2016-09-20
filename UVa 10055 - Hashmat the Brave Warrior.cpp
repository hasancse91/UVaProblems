#include<stdio.h>

int main()
{
    long long int a,b,c;

    while(scanf("%lld %lld",&a,&b)!=EOF)
    {

        if(b>a)
        c=b-a;
        else if(a>=b)
        c=a-b;

        printf("%lld\n",c);

        c=0;

    }

    return 0;
}
