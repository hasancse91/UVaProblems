#include<stdio.h>
#include<string.h>
#include<math.h>

int status[2000];

int main()
{
    int i,j,n,num=0;
    char input[30];

    for(i=2; i<=sqrt(2000); i++)
    {
        for(j=i+i; j<=2000; j=j+i)
        {
            if(status[j]==0)
            status[j]=1;
        }
    }

    while(gets(input)!=NULL)
    {


    for(i=0; input[i]; i++)
    {
        for(j=1; j<=52; j++)
        if(input[i]>='a' && input[i]<='z' && input[i]==96+j)
        num=num+j;
        else if(input[i]>='A' && input[i]<='Z' && input[i]==64+j)
        num=num+j+26;
    }

    if(status[num]==0)
    printf("It is a prime word.\n");
    else
    printf("It is not a prime word.\n");


    num=0;

    }






    return 0;
}
