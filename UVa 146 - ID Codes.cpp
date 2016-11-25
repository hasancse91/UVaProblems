#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    int size,i,add;
    char str[100],tmp[100],rev[100];

    while(true)
    {
        scanf("%s",str);
        strcpy(tmp,str);
        strcpy(rev,str);

        if(str[0]=='#')
        break;

        size=strlen(rev);
        reverse(rev, rev + size);
        next_permutation(tmp,tmp+size);

        if(strcmp(rev,tmp)==0)
            printf("No Successor\n");
        else
            printf("%s\n",tmp);

    }


    return 0;
}
