#include<stdio.h>
#include<math.h>

int main()
{
    int n,tCase;
    double res;

    scanf("%d",&tCase);

    while(tCase--)
    {
        scanf("%d",&n);

        res = pow(2,n-1);

        printf("%.0lf\n",res);
    }


    return 0;
}
