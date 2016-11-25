#include<stdio.h>

int main()
{
    int i,j,k,n,a[150],b[2000000],val;


    while(true)
    {
        scanf("%d",&n);

        if(n==0)
        break;


        for(i=0; i<110; i++)
        a[i]=0;

        for(i=1; i<=n; i++)
        {
            scanf("%d",&val);
            a[val]++;
        }

        int cnt=0;


        for(i=1; i<=101; i++)
        {
            if(a[i]>0)
            {

                k=a[i];
                for(j=1; j<=k; j++)
                {
                    cnt++;

                    printf("%d",i);
                    if(cnt!=n)
                    printf(" ");

                }

            }
        }
        puts("");


    }


    return 0;
}
