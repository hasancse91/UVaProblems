#include <bits/stdc++.h>
#define M 1000000
#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))
int marked[M/64 + 2];
int add = 1,prime[100000],freq[1000000];

using namespace std;


void sieve()
{
    int pos;
    prime[0] = 2;
    for (int i = 3; i * i < M; i += 2)
    {
        if (!on(i))
        {
            prime[add++] = i;
            pos = i;
          for (int j = i * i; j <= M; j += i + i)
          {
            mark(j);
          }
        }
    }


    for(int i=pos+2; i<M; i+=2)
    {
        if(i > 1 && (i == 2 || ((i & 1) && !on(i))))
        {
            prime[add++] = i;
        }

    }

}

int facto(int n)
{
    int i,num=n,flag,cnt=0;

    for(i=0; i<add; i++)
    {
        flag=0;
        while(n%prime[i]==0)
        {
            if(flag==0)
            {
                //cout<<prime[i]<<" ";
                cnt++;
                flag=1;
            }
            n=n/prime[i];
            freq[prime[i]]++;

            if(n==1)
            return cnt;
        }

    }


}

int main()
{
    sieve();
    int n;

    while(scanf("%d",&n)==1 && n)
    {
        if(n==1)
        printf("1 : 0\n");
        else
        printf("%d : %d\n",n,facto(n));
    }

    return 0;
}
