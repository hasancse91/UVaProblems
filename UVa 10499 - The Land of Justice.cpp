#include<stdio.h>



int main()
{
    long long int n;
    long long int res;

    while(scanf("%lld",&n)==1 && n>0)
    {
        if(n==1)
            printf("0%%\n");
        else
        {
            res = n * 25;
            printf("%lld%%\n",res);
        }

    }


    return 0;
}



