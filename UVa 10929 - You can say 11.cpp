#include<stdio.h>
#include<string.h>


int main()
{
    int i,len,a,rem;
    char num[1500];

    while(true)
    {
        scanf("%s",num);

        len=strlen(num);

        if(num[0]=='0' && len==1)
        break;

        rem=0;
        for(i=0; i<len; i++)
        {
            a=(rem*10)+(num[i]-'0');
            rem=a%11;

        }


        if(rem==0)
        printf("%s is a multiple of 11.\n",num);
        else
        printf("%s is not a multiple of 11.\n",num);

    }


    return 0;
}

