#include<stdio.h>

char num[10000][10000];


int main()
{
    int i,j,k,n,mul;

    num[0][1]=1;
    num[0][0]=0;
    for(i=1; i<10000; i++)
    {
        num[i][0]=i;
        mul=0;
        for(j=1; ; j++)
        {
            mul=num[i-1][j]*i+mul;
            num[i][j]=mul%10;
            mul=mul/10;

            if(mul==0)
            break;
        }


    }

    /*for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        printf("%c",num[i][j]);
        puts("");
    }*/

    while(scanf("%d",&n)==1)
    {
        printf("%d!\n",n);
        for(i=1; num[n][i]; i++)
        printf("%c",num[n][i]);
        puts("");
    }


    return 0;
}
