#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#define MAX 1000000

using namespace std;

bool status[MAX];
#define M 1000000
int marked[M/64 + 2];
long long int allmost[M],top=0;

#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))

void sieve()
{
    for (int i = 3; i * i < MAX; i += 2)
    {
        if (!on(i))
        {
          for (int j = i * i; j <= MAX; j += i + i)
          {
            mark(j);
          }

        }
    }
}

bool isPrime(int num)
{
  return num > 1 && (num == 2 || ((num & 1) && !on(num)));
}

int main()
{
    long long int a,b,tCase,k,i,cnt,m;
    sieve();

    for(i=2; i<MAX; i++)
    {
        if(isPrime(i))
        {
            k=i;
            for(m=k*k; m<=1000000000000; m=m*k)
            {
                allmost[top++]=m;
            }
        }


    }



    sort(allmost,allmost+top+1);

    scanf("%lld",&tCase);

    while(tCase--)
    {
        scanf("%lld %lld",&a,&b);
        cnt=0;

        for(i=0; i<MAX; i++)
        {
            if(allmost[i]>=a && allmost[i]<=b)
            cnt++;
        }

        printf("%lld\n",cnt);

    }


    return 0;
}
