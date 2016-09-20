#include<stdio.h>

int main()
{
    int i,j,tCase,cnt,n,sum,a[1500];
    float avr,res;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        sum=0;
        cnt=0;

        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }

        avr=sum/(float)n;

        for(j=0; j<n; j++)
        {
            if(a[j]>avr)
            cnt++;
        }

        res=(cnt*100)/(float)n;

        printf("%.3f%%\n",res);


    }


    return 0;
}
