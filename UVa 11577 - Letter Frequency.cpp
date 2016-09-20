#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l,m,t,tCase,add,cnt[30];
    char a[300],b[300];

    scanf("%d",&tCase);
    getchar();

    for(t=1; t<=tCase; t++)
    {
            gets(a);

            for(k=0; k<=26; k++)
            {
                cnt[k]=0;
            }


            add=0;
            for(i=0; a[i]; i++)
            {
                if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
                {
                    if(a[i]>='A' && a[i]<='Z')
                    b[add++]=a[i]+32;
                    else
                    b[add++]=a[i];
                }

            }
            b[add]=NULL;

            int range=strlen(b);

            for(j=0; j<range; j++)
                {
                    cnt[b[j]-96]++;
                }


            int max=0;
            for(l=1; l<=26; l++)
                {
                    if(max<cnt[l])
                    max=cnt[l];
                }

            for(m=1; m<=26; m++)
            {
                if(max==cnt[m])
                printf("%c",m+96);

            }

            puts("");


    }


    return 0;
}
