#include<stdio.h>

int main()
{
    long int v,t,s,i;

    while(scanf("%ld %ld",&v,&t)!=EOF)
    {
    s=v*t*2;

    printf("%ld\n",s);
    }

    return 0;
}
