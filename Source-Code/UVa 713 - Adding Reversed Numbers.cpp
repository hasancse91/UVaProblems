#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,tCase,len_a,len_b,sum,carry,t;
    char a[300],b[300],c[1000];


    scanf("%d",&tCase);

    for(t=1; t<=tCase; t++)
    {
        scanf("%s",a);
        scanf("%s",b);

        int len_a=strlen(a);
        int len_b=strlen(b);
        int big=len_a;

        if(len_b>big)
        big=len_b;

        carry=0;
        for(i=0;i<big;i++)
        {
            if(i>=len_a)
            a[i]='0';

            if(i>=len_b)
            b[i]='0';

            sum=a[i]+b[i]+carry-2*'0';
            c[i]=(sum%10)+'0';
            carry=sum/10;
        }

        if(carry>0)
        c[i++]=carry+'0';

        c[i]=NULL;

        for(i=0;c[i];i++)
        {
            if(c[i]!='0')
                break;
        }

        for(;c[i];i++)
            printf("%c",c[i]);

        puts("");

    }

    return 0;
}
