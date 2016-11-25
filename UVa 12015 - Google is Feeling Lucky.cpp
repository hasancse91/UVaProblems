#include<stdio.h>


struct url
{
    char link[200];
    int num;


};



int main()
{
    int i,j,k,l,tCase;
    url a[11];


    scanf("%d",&tCase);

    for(j=1; j<=tCase; j++)
    {
        for(i=0; i<10; i++)
        {
            scanf("%s %d",a[i].link,&a[i].num);

        }


        int max=0;
        for(i=0; i<10; i++)
        {
            if(max<a[i].num)
            max=a[i].num;

        }

        printf("Case #%d:\n",j);

        for(i=0; i<10; i++)
        {
            if(max==a[i].num)
            printf("%s\n",a[i].link);

        }

    }




    return 0;
}
