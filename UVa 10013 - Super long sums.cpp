#include<stdio.h>

int a[1000010],b[1000010],result[1000020];

int main()
{

   int tCase,n,c,i,j,k,sum,carry;

   scanf("%d",&tCase);

   for(i=1; i<=tCase; i++)
    {
        if(i>1)
        puts("");
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d%d",&a[j],&b[j]);
        }
        carry=0;
        for(k=n-1;k>=0;k--)
        {
            sum=a[k]+b[k]+carry;
            result[k]=sum%10;

            carry=sum/10;
        }



    if (carry!=0)
    printf("%d",carry);

    for(k=0;k<n;k++)
    printf("%d",result[k]);

    printf("\n");


    }



    return 0;
}
