#include<stdio.h>

int first(int val)
{
    int temp=0;
    while(val!=0)
        {
            temp=temp+(val%10)*(val%10);
            val=val/10;
        }

    return temp;
}


int main()
{
    int i,tCase,n,dummy;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%d",&n);

        dummy=n;
        while(true)
        {
            dummy=first(dummy);

            if(dummy==1)
            {
                printf("Case #%d: %d is a Happy number.\n",i,n);
                break;
            }
            else if(dummy==4)
            {
                printf("Case #%d: %d is an Unhappy number.\n",i,n);
                break;
            }
        }

    }


    return 0;
}

