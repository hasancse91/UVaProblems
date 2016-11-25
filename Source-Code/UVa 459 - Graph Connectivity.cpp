#include<iostream>
#include<cstring>
#include<cstdio>
#define MAX 10000

using namespace std;

bool grid[MAX][MAX],flag[30];
int range;

void floodfill(int a)
{
    int i,j;
    if(a>range || flag[a]==1)
    return;

	flag[a]=1;
    for(i=1; i<=range; i++)
    {
        if(grid[a][i]==1 && flag[i]==0)
        {
            floodfill(i);
        }
    }
}

int main()
{
    int tCase,i,j,cnt;
    char a[10];

    cin>>tCase;
    scanf("\n");
    while(tCase--)
    {

        //getchar();
        gets(a);
        range=a[0]-64;
        cnt=0;
        //cout<<range;
        for(i=1; i<=range; i++)
        {
            for(j=1; j<=range; j++)
            {
                grid[i][j]=0;
            }
            flag[i]=0;
        }

        while(gets(a) && a[0])
        {
            grid[a[0]-64][a[1]-64]=1;
            grid[a[1]-64][a[0]-64]=1;

        }

        for(i=1; i<=range; i++)
        {
            if(flag[i]==0)
            {
                cnt++;
                //cout<<"->>"<<i<<endl;
                floodfill(i);
            }
        }

        cout<<cnt<<endl;

        if(tCase>=1)
        cout<<endl;
    }

    return 0;
}
