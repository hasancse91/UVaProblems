#include<stdio.h>
#include<string.h>

char str[1000000],con[1000000];

int main()
{
    int i,j,add=0,len,flag;


    while(gets(str)!=NULL)
    {
        gets(str);
        flag=0;

        add=0;


        if(strcmp(str,"DONE")==0)
        break;


        for(i=0; str[i]; i++)
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if(str[i]>='A' && str[i]<='Z')
            con[add++]=str[i]+32;
            else
            con[add++]=str[i];
        }

        len=add-1;

        for(j=0; j<=len/2; j++)
        {
            if(con[j]==con[len-j])
            flag=1;
            else
            {
                flag=0;
                printf("Uh oh..\n");
                break;
            }

        }

        if(flag==1)
            printf("You won't be eaten!\n");


    }



    return 0;
}
