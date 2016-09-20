#include<stdio.h>

int main()
{
    int i,j,k,in[20],tCase,flag;

    scanf("%d",&tCase);
    printf("Lumberjacks:\n");

    for(i=1; i<=tCase; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%d",&in[j]);
        }

        flag=0;


        for(j=0;j<=8; j++)
        {
             if(in[j]<in[j+1])
             {
                flag=1;
                break;
             }
        }


        if(flag!=0)
        {
            for(j=0; j<=8; j++)
            {
                if(in[j]>in[j+1])
                {
                    flag=0;
                    break;
                }
            }


            if(flag==1)
            printf("Ordered");
            else
            printf("Unordered");
        }
        else
            printf("Ordered");

        puts("");


    }


    return 0;
}
