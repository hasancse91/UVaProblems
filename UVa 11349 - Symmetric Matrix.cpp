#include<stdio.h>

int main()
{
    int i,j,k,n,flag=0,tCase;
    long long a[150][150];

    scanf("%d",&tCase);


    for(int z=1; z<=tCase; z++)
    {
        flag=0;
        getchar();
        getchar();
        getchar();
        getchar();
        scanf("%d",&n);


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        scanf("%lld",&a[i][j]);
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i][j]!=a[n-i+1][n-j+1] || a[i][j]<0)
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
            break;

    }

    if(flag==0)
    printf("Test #%d: Symmetric.\n",z);
    else
    printf("Test #%d: Non-symmetric.\n",z);

    flag=0;
    }





    return 0;
}
