#include<stdio.h>

int main()
{
    int a,b,c,i,n;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);

    }

    return 0;
}
