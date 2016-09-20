#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n,k,i,j,a,b;
    long long int res;

    while(scanf("%d %d",&n,&k)==2)
    {
        if(n==0 && k==0)
        break;

        if(k>n-k)
        k=n-k;

        res=1;

        for(i=1; i<=k; i++)
        {
            res=res*(n-k+i)/i;
        }

        printf("%lld\n",res);
    }


    return 0;
}
