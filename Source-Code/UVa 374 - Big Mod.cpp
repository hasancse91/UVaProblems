#include<iostream>
#include<cstdio>

using namespace std;


int bmod(int a,int b,int m)
{
    if(b==0)
    return 1;

    int x;

    if(b&1)//b odd
    {
        x = (a%m * bmod(a,b-1,m)%m)%m;
    }
    else
    {
        x = bmod(a,b/2,m) % m;

        x = (x*x) % m;
    }


    return x;
}

int main()
{
    int a,b,m,res;

    while(scanf("%d %d %d",&a,&b,&m)==3)
    {
        res= bmod(a,b,m);

        printf("%d\n",res);
    }

    return 0;
}


