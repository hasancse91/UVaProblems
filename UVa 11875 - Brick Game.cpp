#include<stdio.h>

int main()
{
    int tCase,i,j,k,a[1000],n;

    scanf("%d",&tCase);


    for(i=1; i<=tCase; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        scanf("%d",&a[j]);

        k=n/2;

        printf("Case %d: %d\n",i,a[k]);


    }



    return 0;
}
