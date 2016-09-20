#include<stdio.h>
#include<string.h>


int main()
{
    int n,i,res,a;
    char num[100000];

    memset(num,1,sizeof(num));

    while(scanf("%d",&n)==1)
    {
        i=1;
        a=0;

        while(true)
        {
            a=(a*10+(num[i]-'0'))%n;

            if(a==0)
            {
                res=i;
                break;
            }
            i++;
        }

        printf("%d\n",res);


    }


    return 0;
}

