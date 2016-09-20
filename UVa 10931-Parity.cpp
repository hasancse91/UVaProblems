#include<stdio.h>

int main()
{
    int i,j,k,n,count=0,num,bin[100],tCase;


    //scanf("%d",&tCase);

    for(;;)
    {scanf("%d",&num);

    if(num==0)
    break;

   i=0;

    //while(scanf("%ld",&num)!=0)
    while(num!=0)
    {
        bin[i]=num%2;

        if(num%2!=0)
        count++;

        num=num/2;
        i++;
    }

    printf("The parity of ");


    for(j=i-1; j>=0; j--)
        printf("%d",bin[j]);
    printf(" is %d (mod 2).\n",count);

    count=0;

    }

    return 0;
}
