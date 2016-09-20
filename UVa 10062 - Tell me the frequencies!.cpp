#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    int i,j,arr[200],sub[200],temp,maxi,tCase=0;
    char str[1500];

    while(gets(str)!=0)
    {
        memset(arr,0,sizeof(arr));
        memset(sub,0,sizeof(sub));
        maxi=0;

        if(tCase>0)
        puts("");
        tCase++;

        for(i=0; str[i]; i++)
        {
            temp=str[i];

            if(maxi<temp)
            maxi=temp;

            arr[temp]++;
            sub[temp]++;

        }


        sort(sub,sub+200);


        for(i=0; i<200; i++)
        {
            for(j=199; j>=0; j--)
            {
                if(sub[i]==arr[j] && sub[i]>0)
                {
                    printf("%d %d\n",j,arr[j]);
                    arr[j]=0;
                    break;
                }

            }

        }

        memset(str,NULL,sizeof(str));



    }



    return 0;
}
