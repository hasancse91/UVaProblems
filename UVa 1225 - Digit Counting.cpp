#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char,int> mp;
    map<string,int>::iterator it;
    int tCase,n,i,temp;

    scanf("%d",&tCase);

    while(tCase--)
    {
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            temp=i;
            while(temp)
            {
                mp[temp%10+'0']++;
                temp/=10;
            }
        }

        for(i=0;i<10;i++)
        {
            if(i==0)
            printf("%d",mp[i+'0']);
            else
            printf(" %d",mp[i+'0']);
        }
        puts("");

        mp.clear();
    }

    return 0;
}

