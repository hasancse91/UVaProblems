#include<stdio.h>

void print(int n)
{
    int i,j,k,l;

  //  puts("");
    for(i=1; i<=n; i++)
        {
        for(j=1; j<=i; j++)
        printf("%d",i);

        puts("");

        }

    for(k=n-1; k>=1; k--)
        {
            for(l=k; l>=1; l--)
            printf("%d",k);
            puts("");

        }

}

int main()
{
    int x,n,m,tCase,z;

    scanf("%d",&tCase);

    for(z=1; z<=tCase; z++)
    {
        if(z>1)
        puts("");
        scanf("%d",&n);

        scanf("%d",&m);

        for(x=1; x<=m; x++)
        {
        if (x>1) puts("");
        print(n);
        }
    }


    return 0;
}
