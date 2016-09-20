#include<stdio.h>

int number(char str[10])
{
    int i,num=0;
    for(i=0; str[i]; i++)
            {
                num=num*10+str[i]-'0';
            }

    return num;
}


int main()
{
    int i,a,b,c,cnt=0;
    char sign,eq,res[5];

    while(scanf("%d%c%d%c%s",&a,&sign,&b,&eq,res)==5)
    {
        if(res[0]!='?')
        {


            c=number(res);
            if((sign=='+' && a+b==c) || (sign=='-' && a-b==c))
            cnt++;
        }

    }
    printf("%d\n",cnt);


    return 0;
}
