#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,count=1;

    while(1)
    {
        scanf("%d",&n);

        if(n<0)
        break;

    for(i=0;i<=14;i++)
    {
        int j=(int) pow((double)2,(double)i);

        if(n<=j)
        {

            printf("Case %d: %d",count,i);
            count++;
            break;
        }

    }
        printf("\n");
    }







    return 0;
}
