#include<iostream>
#include<map>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int i,j,lenL,lenS;
    char str[5000];
    map <char, char> mp;

    gets(str);

    char letters[] = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ`1234567890-=[]\\;',./";
    char mapping[] = "  czaqsdfyghjbvui w etx  r  czaqsdfyghjbvui w etx  r   `1234567890op[klnm,";

    lenL = strlen(letters);


    for(i=0; letters[i]; i++)
    {
        mp[letters[i]]=mapping[i];
    }

    lenS = strlen(str);

    for(i=0; str[i]; i++)
    {
        printf("%c",mp[str[i]]);
    }
    puts("");



    return 0;
}
