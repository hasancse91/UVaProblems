#include<stdio.h>
#include<string.h>
#define MAX 1000010



int main()
{
    int tCase,q,i;
    char str[MAX],sub[1010],*ptr;

    scanf("%d",&tCase);
    while(tCase--)
    {
        scanf("%s %d",str,&q);

        for(i=1; i<=q; i++)
        {
            scanf("%s",sub);

            ptr=strstr(str,sub);

            if(ptr!=NULL)
            printf("y\n");
            else
            printf("n\n");
        }

    }


    return 0;
}
