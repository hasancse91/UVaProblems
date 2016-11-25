#include<stdio.h>

int main()
{
    int i,j,k;
    char a[1000];

    while(gets(a))
    {
        for(i=0; a[i]; i++)
        {
            printf("%c",a[i]-7);
        }
        puts("");
    }



    return 0;
}
