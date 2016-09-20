#include<stdio.h>
#include<math.h>


int main()
{
    int a,b,i,j,k,y,count=0;
    float x,z;

    while(1)
    {
        scanf("%d %d",&a,&b);

        if(a==0 && b==0)
        break;

        for(i=a; i<=b; i++)/*a=x;
b=sqrt(x);
if(b*b==a)
then ......
ar float e equal compare er jonno
#define eps 0.0000001
if((a-b)<eps)
that means if a==b*/
        {
            x=sqrt(i);

            y=(int)x;
            z=x-y;

            if(y!=0 && z==.0)
            count++;

        }
        printf("%d\n",count)
        count=0;
        //k++;
    }

    return 0;
}
