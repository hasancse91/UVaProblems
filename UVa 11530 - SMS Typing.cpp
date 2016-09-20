#include<stdio.h>

int main()
{
    int i,j,result=0,tCase,mod;
    char a[110];

    scanf("%d",&tCase);
    getchar();





    for(j=1; j<=tCase; j++)
    {   gets(a);


        for(i=0; a[i]; i++)
        {
            if(a[i]>='a' && a[i]<='o')
            {
                mod=(a[i]-('a'-1))%3;
                if(mod==0)
                result=result+3;
                else
                result=result+mod;
            }
            else if(a[i]==' ')
            result+=1;
            else if(a[i]>='p' && a[i]<='s')
            {
                mod=(a[i]-('p'-1))%4;
                if(mod==0)
                result+=4;
                else
                result+=mod;
            }
            else if(a[i]>='t' && a[i]<='v')
            {
                mod=(a[i]-('t'-1))%3;
                if(mod==0)
                result=result+3;
                else
                result=result+mod;
            }
            else if(a[i]>='w' && a[i]<='z')
            {
                mod=(a[i]-('w'-1))%4;
                if(mod==0)
                result+=4;
                else
                result+=mod;
            }





        }

        printf("Case #%d: %d\n",j,result);
        result=0;


    }





  return 0;
}
