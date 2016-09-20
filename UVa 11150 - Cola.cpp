#include<stdio.h>

int main()
{
    int n,i,j,res,temp,br;

    while(scanf("%d",&n)==1)
    {
        res=n;
        while(n>2)
        {
            temp=n/3;
            res=res+temp;
            n=(n%3)+temp;
        }

        if(n==2)
        printf("%d\n",res+1);
        else
        printf("%d\n",res);



    }


    return 0;
}
