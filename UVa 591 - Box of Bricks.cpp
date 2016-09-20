#include<stdio.h>

int main()
{
    int i,j,num,cnt,a[100],tCase=0;

    while(true)
    {
        scanf("%d",&num);

        if(num==0)
        break;

        tCase++;

        int sum=0;
        cnt=0;
        for(i=0; i<num; i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }


        int avr=sum/num;

        for(i=0; i<num; i++)
        {
            if(a[i]>avr)
            cnt=cnt+(a[i]-avr);
        }



        printf("Set #%d\nThe minimum number of moves is %d.\n\n",tCase,cnt);

    }


    return 0;
}
