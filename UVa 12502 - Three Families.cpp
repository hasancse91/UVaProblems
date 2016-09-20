#include<stdio.h>

int main()
{
    int i,x,y,z,xtra,tCase,res;

    scanf("%d",&tCase);


    for(i=1; i<=tCase; i++)
    {
        scanf("%d %d %d",&x,&y,&z);



        /*xtra=(x+y)/3;
        res=(z*(x-xtra))/xtra;*/
        res=((2*x-y)*z)/(x+y);
        printf("%d\n",res);

    }


    return 0;
}
