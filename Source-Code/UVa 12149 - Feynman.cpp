#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,n,cnt;

    while(true)
    {
        cnt=0;

        scanf("%d",&n);

        if(n==0)
        break;

        for(i=1; i<=n; i++)
        {
            cnt=cnt+pow(i,2);
        }

        printf("%d\n",cnt);

    }

    return 0;
}
