#include<stdio.h>

int main()
{
    int tCase,n,p,q,n_a[50],i,j,k,res,sum=0;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%d %d %d",&n,&p,&q);


        for(j=0; j<n; j++)
        scanf("%d",&n_a[j]);

        sum=0;
        res=0;


        for(k=0; k<n; k++)
        {


            sum=sum+n_a[k];

            if(sum<=q && (k+1)<=p)
            res=k+1;
            else
            break;

        }



        printf("Case %d: %d\n",i,res);


    }





    return 0;
}
