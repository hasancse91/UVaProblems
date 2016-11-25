#include<bits/stdc++.h>

using namespace std;

int binCount(int n)
{
    int cnt=0,tmp;

    while(n)
    {
        if(n&1)
        cnt++;

        n=n>>1;

    }

    return cnt;
}

int main()
{
    int n,tCase,b1,b2;

    scanf("%d",&tCase);

    while(tCase--)
    {
        scanf("%d",&n);
        b2=0;

        b1=binCount(n);

        while(n)
        {
            b2+=binCount(n%10);
            n/=10;
        }

        printf("%d %d\n",b1,b2);

    }

    return 0;
}
