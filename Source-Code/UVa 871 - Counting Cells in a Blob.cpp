#include<iostream>
#include<cstdio>

using namespace std;

bool grid[30][30],flag[30][30];
int range,maxi,row,col,cnt;

void floodfill(int i, int j)
{
    if(i<1 || i>row || j<1 || j>col)
    return;

    if(grid[i][j]==1 && flag[i][j]==0)
    {
        flag[i][j]=1;
        cnt++;

        floodfill(i+1, j);
        floodfill(i-1, j);
        floodfill(i, j+1);
        floodfill(i, j-1);
        floodfill(i+1, j+1);
        floodfill(i+1, j-1);
        floodfill(i-1, j+1);
        floodfill(i-1, j-1);
    }

}

int main()
{
    int tCase,i,j,t,m,val,len;
    char str[30];
    cin>>tCase;

    scanf("\n");

    for(t=1; t<=tCase; t++)
    {
        i=1;
        while(gets(str) && str[0])
        {
            j=1;
            for(m=0; str[m]; m++)
            {
                grid[i][j]=str[m]-'0';
                j++;
            }
            i++;
        }

        row=i-1;
        col=j-1;

        for(i=1; i<=row; i++)
        {
            for(j=1; j<=col; j++)
            flag[i][j]=0;
        }

        maxi=0;
        for(i=1; i<=row; i++)
        {
            for(j=1; j<=col; j++)
            {
                if(grid[i][j]==1 && flag[i][j]==0)
                {
                    cnt=0;
                    floodfill(i,j);

                    if(maxi<cnt)
                    maxi=cnt;
                }
            }
        }

        if(t>1)
        cout<<endl;

        cout<<maxi<<endl;
    }

    return 0;
}
/*
3

11000
01100
00101
10001
01011

11111
00100
01001
11011
11011

11000
01100
00101
10001
01011






*/
