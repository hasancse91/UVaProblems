#include<stdio.h>

int main()
{
    int t,h,m;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d:%d",&h,&m);

        h=11-h;
        if(m==0)
        h++;

        if(h<=0)
        h+=12;

        if(m!=0)
            m=60-m;


        printf("%02d:%02d\n",h,m);

    }

    return 0;

}
