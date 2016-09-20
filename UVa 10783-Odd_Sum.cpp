#include<stdio.h>

int main()
{
    int a,b,i,j,sum=0,tCase;


    scanf("%d",&tCase);
    for(i=1; i<=tCase; i++)
    {
        scanf("%d %d",&a,&b);

        for(j=a; j<=b; j++)
        if(j%2!=0)
        sum=sum+j;

        printf("Case %d: %d\n",i,sum);

        sum=0;
    }

    return 0;
}
