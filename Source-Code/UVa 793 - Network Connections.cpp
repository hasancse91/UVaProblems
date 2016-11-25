#include<iostream>
#include<cstdio>
#define MAX 10000000

using namespace std;

int par[MAX];

int find(int r)
{
	if(par[r]==r)
	return r;
	else
    return par[r]=find(par[r]);

}

void Union(int a,int b)
{
	int u=find(a);
	int v=find(b);

    par[u]=v;

}

int main()
{
    int i,tCase,t,a,b,succ,unsucc,n,u,v;
    char str[100];

    scanf("%d",&tCase);


    for(t=1; t<=tCase; t++)
    {
        scanf("%d",&n);
        getchar();
        succ=0;
        unsucc=0;

        for(i=1; i<=n; i++)
        par[i]=i;

        while(gets(str))
        {
            if(!str[0])
            break;
            sscanf(str+1,"%d %d",&a,&b);



            if(str[0]=='c')
            {
                Union(a,b);
            }
            else
            {
                for(i=1;i<=n;i++)
                find(i);

                u=find(a);
                v=find(b);

                if(u==v)
                succ++;
                else
                unsucc++;
            }

        }

        if(t>1)
        puts("");

        printf("%d,%d\n",succ,unsucc);


    }


    return 0;
}
/*
2

4
c 1 4
c 2 4
q 1 3
q 1 4

10
c 1 5
c 2 7
q 7 1
c 3 9
q 9 6
c 2 5
q 7 5

*/

