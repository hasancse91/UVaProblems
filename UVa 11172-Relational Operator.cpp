#include<stdio.h>

int main()
{
    int i,a,b,tCase;

    scanf("%d",&tCase);
    for(i=1; i<=tCase; i++)
    {
        scanf("%d %d", &a, &b);

        if(a<b)
        printf("<\n");
        else if(a>b)
        printf(">\n");
        else
        printf("=\n");

    }

    return 0;
}
