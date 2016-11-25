#include<stdio.h>

int main()
{
    int i,j,k,n,count[30];
    char str[9999];

    while(scanf("%d",&n)==1)
    {
            getchar();
    for(k=1; k<=26; k++)
        count[k]=0;

    for(i=1; i<=n; i++)
    {
        gets(str);



        for(j=0; str[j]; j++)
        {
            if(str[j]>='a' && str[j]<='z')
            count[str[j]-96]++;
            else if(str[j]>='A' && str[j]<='Z')
            count[str[j]-64]++;
        }

    }



        int temp=0;
        for(i=1; i<=26; i++)
        {
            if(temp<count[i])
            temp=count[i];
        }

        for(i=temp;i>=1;i--)
        {
            for(j=1;j<=26;j++)
            {
                if(i==count[j])
                printf("%c %d\n",j+'A'-1,count[j]);
            }
        }

    }


    return 0;
}

