#include<stdio.h>

int main()
{
    char a[10000];
    int i,flag=0,count=0;


    while(gets(a)!=NULL)
          {
            for(i=0;a[i];i++)
                {
                    if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
                        {
                            if(flag==0)
                                {
                                    flag=1;
                                    count++;
                                }
                        }

                    else
                        {
                            flag=0;
                        }

                }



    printf("%d\n",count);
    count=0;
    flag=0;

          }


    return 0;
}
