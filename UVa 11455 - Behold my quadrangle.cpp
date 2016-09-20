#include<stdio.h>

int main()
{
    int tCase,i,j,k,l,a,b,c,d,temp;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);

        if(a==b && b==c && c==d)
        printf("square\n");
        else if(a==b && c==d || a==c && b==d || a==d && b==c)
        printf("rectangle\n");
        else if(a<b+c+d && b<a+c+d && c<a+b+d && d<a+b+c)
        printf("quadrangle\n");
        else
        printf("banana\n");


    }


    return 0;
}
