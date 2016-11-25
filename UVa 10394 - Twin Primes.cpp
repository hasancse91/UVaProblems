#include<stdio.h>
#include<math.h>


int status[20000010];


int main()
{
    int i,j,n,limit,pair[200000],prime[200000],cnt=1;

    limit=sqrt(20000000);

    for(i=2; i<=limit; i++)
            {
                if(status[i]==0)
                for(j=i+i; j<=20000000; j+=i)
                    {
                        if(status[j]==0)
                        status[j]=1;
                    }
            }


     for(i=2; i<=20000000; i++)
    {
        if(status[i]==0 && status[i+2]==0)
        pair[cnt++]=i;
    }


    while(scanf("%d",&n)==1)
    {
        printf("(%d, %d)\n",pair[n],pair[n]+2);
    }



    return 0;
}
