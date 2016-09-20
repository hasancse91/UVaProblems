#include<stdio.h>


int main()
{
    long long int i,j,k,m,n,a,b,c,arr[150],carr[150],temp,add,cadd,res,ca,cb;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        if(m==0 && n==0)
        break;


        a=n;
        c=m;
        b=n-m;
        add=0;
        cadd=0;
        res=1;
        ca=1;
        cb=1;

        if(c>b)
        {
            temp=c;
            c=b;
            b=temp;
        }



        for(i=a; i>b; i--)
        {
            arr[add]=i;
            add++;

        }


        for(i=2; i<=c; i++)
        {
            carr[cadd]=i;
            cadd++;
        }


        for(i=cadd-1; i>=0; i--)
        {
            for(j=0; j<add; j++)
            {
                if(arr[j]%carr[i]==0)
                {
                    arr[j]=arr[j]/carr[i];
                    carr[i]=1;
                    break;


                }
            }
        }


        for(i=0; i<cadd; i++)
            cb=cb*carr[i];

        for(j=0; j<add; j++)
            ca=ca*arr[j];

        res=ca/cb;

        printf("%lld things taken %lld at a time is %lld exactly.\n",n,m,res);



    }




    return 0;
}

