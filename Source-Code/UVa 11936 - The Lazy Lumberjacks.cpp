#include<stdio.h>

int main()
{
    int a,b,c,tCase,i;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a+b>c && a+c>b && b+c>a)
        printf("OK\n");
        else
        printf("Wrong!!\n");

    }


    return 0;
}
