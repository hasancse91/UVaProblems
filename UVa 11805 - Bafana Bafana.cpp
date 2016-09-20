#include<stdio.h>

int main()
{
    int tCase,n,k,p,i;

    scanf("%d",&tCase);
    for(i=1; i<=tCase; i++)
    {
        scanf("%d %d %d",&n,&k,&p);

        int cnt=0;

        while(true)
        {
            if(k==n)
            k=0;
            k++;

            cnt++;
            if(cnt==p)
            break;

        }

        printf("Case %d: %d\n",i,k);
    }



    return 0;
}
