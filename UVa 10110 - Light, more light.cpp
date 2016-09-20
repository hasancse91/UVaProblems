#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,tCase;
    long long int n,a;



    while(scanf("%lld",&n),n)
    {
        a=sqrt(n);

        if(a*a==n)
        printf("yes\n");
        else
        printf("no\n");
    }

    return 0;
}
