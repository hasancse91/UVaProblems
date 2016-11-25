#include<stdio.h>
//2147483646 2147483647
int main()
{
    int j,cnt,a,b,larg,temp;
    long long int x,y,n,i,maxi;

    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
        break;

        larg=0;
        maxi=0;

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

                if(n&1)
                n=3*n+1;
                else
                n=n/2;

                cnt++;

                if(n==1)
                break;

            }

            if(cnt>larg)
            {
                larg=cnt;
                maxi=i;
            }

        }

    printf("Between %lld and %lld, %lld generates the longest sequence of %d values.\n",x,y,maxi,larg);

    }



    return 0;
}


