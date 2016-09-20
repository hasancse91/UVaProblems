#include<stdio.h>
#include<math.h>

int main()
{
    int tCase=0;
    long int n,N;

    while(scanf("%ld",&N)==1)
    {
        if(N==0)
            break;

        n=ceil((3+sqrt(8*N+9))/2.0);

        printf("Case %d: %ld\n",++tCase,n);
    }


    return 0;
}
