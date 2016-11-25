#include<stdio.h>
#include<string.h>
#include<algorithm>
#define inf 100000000

int bed[10000000];


using namespace std;

int main()
{
    int i,j,k,l,n,b,h,w,prc,flag,add;

    while((scanf("%d %d %d %d",&n,&b,&h,&w))==4)
    {

        flag=0;
        add=0;
        int min=inf;

        for(i=1; i<=h; i++)
        {
            scanf("%d",&prc);
            for(j=1; j<=w; j++)
            {
                scanf("%d",&bed[j]);
                if(bed[j]>=n)
                flag=1;

            }



            if(flag==1)
            {
                if(min>prc*n)
                min=prc*n;
            }


        }


        if(min<=b)
        printf("%d\n",min);
        else
        printf("stay home\n");

    }


    return 0;
}
