#include<stdio.h>
#include<string.h>

char temp[150];

void rev(int len)
{
    int m;

    for(m=len-1; m>=0; m--)
    printf("%c",temp[m]);

}

int main()
{
    int n,i,add,flag,leng;
    char str[150];

    while(scanf("%d",&n) && n)
    {
        getchar();
        gets(str);

        leng=strlen(str)/n;

        for(i=0; ; )
        {
            add=0;
            flag=1;

            for( ;add<=leng-1; i++)
            {
                if(str[i]==NULL)
                {
                    flag=0;
                    break;
                }
                temp[add++]=str[i];

            }

            if(flag==0)
            break;

            if(add==leng)
            rev(leng);
        }
        puts("");

    }


    return 0;
}
