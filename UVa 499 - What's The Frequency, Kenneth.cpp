#include<stdio.h>
#include<string.h>

char in[1000000000];

int main()
{
    int i,j,k,st[27],ST[27],flag=0;




    while(gets(in)!=NULL)
    {
        for(j=0; j<=26; j++)
        {
            st[j]=ST[j]=0;
        }


        for(i=0; in[i]; i++)
    {
        if(in[i]>='A' && in[i]<='Z')
        ST[in[i]-64]++;
        else if(in[i]>='a' && in[i]<='z')
        st[in[i]-96]++;
    }

    int top=0;
    for(i=1; i<=26; i++)
    {
        if(top<ST[i])
        top=ST[i];
        if(top<st[i])
        top=st[i];
    }


    for(i=1; i<=26; i++)
    {
        if(ST[i]==top)
        printf("%c",i+64);


    }
    for(i=1; i<=26; i++)
    {

        if(st[i]==top)
        printf("%c",i+96);

    }
    printf(" %d\n",top);


    }





    return 0;
}
