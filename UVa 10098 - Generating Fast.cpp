#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tCase,len;
    char str[15];

    scanf("%d",&tCase);

    while(tCase--)
    {
        getchar();
        scanf("%s",str);
        len = strlen(str);
        sort(str,str+len);

        printf("%s\n",str);
        while(next_permutation(str,str+len))
        {
            printf("%s\n",str);
        }
        puts("");
    }


    return 0;
}
