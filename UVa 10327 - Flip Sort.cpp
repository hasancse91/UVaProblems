#include<stdio.h>

int main()
{
    int tCase,n,i,j,k,num[1010],temp,cnt;

    while(scanf("%d",&n)==1)
    {

        int flip=0;

        for(j=0; j<n; j++)
            scanf("%d",&num[j]);


            for(i=0;i<n;i++)
            {
                for(j=1;j<n-i;j++)
                {
                    if(num[j-1]>num[j])
                    {
                        temp=num[j];
                        num[j]=num[j-1];
                        num[j-1]=temp;
                        flip++;
                    }
                }

            }


        printf("Minimum exchange operations : %d\n",flip);


    }


    return 0;
}


