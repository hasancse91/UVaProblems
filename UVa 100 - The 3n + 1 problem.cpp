#include<stdio.h>

int main()
{
    int n,i,cnt,a,b,larg,temp,x,y;

    while(scanf("%d %d",&a,&b)==2)
    {
        larg=0;

        if(a>b)
        {
            y=a;
            x=b;
        }
        else
        {
            x=a;
            y=b;
        }

    for(i=x; i<=y; i++)
    {
        n=i;
        cnt=0;

        while(true)
        {
            cnt++;

            if(n==1)
            break;

            if(n&1)
            n=3*n+1;
            else
            n=n/2;
        }

        if(cnt>larg)
        larg=cnt;


    }



        printf("%d %d %d\n",a,b,larg);

    }


    return 0;
}
