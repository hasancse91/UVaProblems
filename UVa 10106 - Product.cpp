#include<stdio.h>
#include<string.h>

char a[300];
char res[99999];

void strreve()
{

    char rev[99999];


    int an,i,j,k,l;

    for(i=0; a[i]; i++);

    an=i;

    for(j=0,k=i-1; j<an, k<=a[k]; j++,k--)
    rev[j]=a[k];
    rev[j]=NULL;

    puts(rev);
    puts("");

}

int main()
{
    int i,j,k,num,len,temp,carry,add;



    while(scanf("%d",&num)==1)
    {
        scanf("%s",a);

        carry=0;
        add=0;

    len=strlen(a);


    for(i=len-1; i>=0; i--)
    {
        temp=(a[i]-'0')*num+carry;
        res[add++]=temp%10;
        carry=temp/10;

    }


    if(carry>0)
    {
        printf("%d",carry);
    }

    strreve();

    }



    return 0;
}
