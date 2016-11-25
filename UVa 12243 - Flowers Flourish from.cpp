#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l,add=0;
    char str[10000],pro[10000],tst;


    while(true)
    {

        str[0]='\0';
        int flag=0;

        gets(str);

        if(str[0]=='*')     break;

        for(i=0; str[i]; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            pro[i]=str[i]+32;
            else
            pro[i]=str[i];

        }
        if(pro[i-1]==32)
        pro[i-1]=NULL;
        else
        pro[i]=NULL;

        tst=pro[0];

        for(i=1; pro[i]; i++)
        {
            if(pro[i]==32)
            {
                if(pro[i+1]==tst)
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                    break;
                }
            }

        }

        if(flag==0)
        printf("Y\n");
        else
        printf("N\n");

    }



    return 0;
}
