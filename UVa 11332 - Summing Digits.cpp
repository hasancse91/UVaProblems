#include<stdio.h>

int sum(int x)
{
    int mod,res=0,res1=0,res2=0,n,n1;

    while(x!=0)
            {
                mod=x%10;
                res=res+mod;
                x=x/10;
            }


    return res;
}

int main()
{
    long long int n,a;
    long long int mod,res=0,res1=0,res2=0,n1,i,j,k;

    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
        break;

            i=sum(n);
            j=sum(i);
            k=sum(j);

        printf("%lld\n",k);

    }


    return 0;
}
