#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,n,a[3500], b[3500];


    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        b[i]=0;

        for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(j=0; j<n-1; j++)
    {
        int temp=abs(a[j]-a[j+1]);

        if(temp>=1 && temp<=n-1)
        b[temp]=1;
    }


    int flag=0;
    for(k=1; k<=n-1; k++)
    {
        if(b[k]==0)
        {
            flag=1;

        }

    }

    if(flag==0)
    printf("Jolly\n");
    else
    printf("Not jolly\n");


    }

    return 0;
}
