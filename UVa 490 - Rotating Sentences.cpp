#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char grid[110][110],str[110];
    int i,j,maxL=0,len,c=0,k=0;
    memset(grid,' ',sizeof(grid));

    while(gets(str))
    {
        len = strlen(str);
        if(maxL<len)
        maxL = len;
        for(i=0; str[i]; i++)
        {
            grid[c][i] = str[i];
        }
        c++;
    }


    for(i=1; i<=maxL; i++)
    {
        for(j=c-1; j>=0; j--)
        {
            printf("%c",grid[j][k]);
        }
        puts("");
        k++;
    }


    return 0;
}
