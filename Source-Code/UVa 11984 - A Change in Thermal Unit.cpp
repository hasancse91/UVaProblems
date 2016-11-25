#include<stdio.h>

int main()
{

    int i,tCase;
    float c,f,F,C;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%f %f",&c,&f);

        F=((9.0/5.0)*c+32)+f;
        C=(5.0/9.0)*(F-32);

        printf("Case %d: %.2f\n",i,C);
    }


    return 0;
}
