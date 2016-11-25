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

    while(gets(str))
    {
        char letters[] = " BCDEFGHIJKLMNOPRSTUVWXY1234567890-=[]\\;',./";
        char mapping[] = " VXSWDFGUHJKNBIOEARYCQZT`1234567890-P[]L;M,.";

        lenL = strlen(letters);

        for(i=0; letters[i]; i++)
        {
            mp[letters[i]]=mapping[i];
        }

        for(i=0; str[i]; i++)
        {
            printf("%c",mp[str[i]]);
        }
        puts("");
    }





    return 0;
}

