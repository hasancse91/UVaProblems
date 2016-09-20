#include<stdio.h>

int main()
{
    int tCase,i;
    long long int a,c,b;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if(a+c<=b || a+b<=c || c+b<=a || a==0 || b==0 ||c==0)
        printf("Case %d: Invalid\n",i);

        else if(a==b && b==c && c==a)
        printf("Case %d: Equilateral\n",i);

        else if(a==b || b==c || c==a)
        printf("Case %d: Isosceles\n",i);

        else
        printf("Case %d: Scalene\n",i);




    }

    return 0;
}
