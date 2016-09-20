#include<stdio.h>

int main()
{
    int i,j,tCase,count1=0,count2=0,count3=0,count4=0;
    char a[25],b[25];

    scanf("%d",&tCase);
    getchar();

    for(j=0; j<tCase; j++)
    {
    gets(a);

    gets(b);


    for(i=0; a[i]; i++)
    count1++;

    for(i=0; b[i]; i++)
    count2++;

    //printf("%d %d",count1,count2);

    if(count1==count2)
    {
        for(i=0; i<count1; i++)

            {if(a[i]==b[i] || ((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')))
            count3++;
            //printf("Yes\n");
            //else
            //count4++;

            printf("# %d #\n",count3);//for debug
            }
            //printf("%d\n%d %d",count1,count3,count4);


            if(count1==count3)
            {printf("Yes\n");
            count3=0;
            }
            else
            printf("No\n");

            //printf("\n# %d #\n",count3);//for debug




            //count1=0;






    }
    else
    printf("No\n");


    }







    return 0;
}

