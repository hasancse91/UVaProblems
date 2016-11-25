#include<iostream>
#include<cstring>
#include<cstdio>


using namespace std;

int flag[110][110],row,column;
char grid[110][110];

void floodfill(int i, int j)
{
    if(i<1 || j<1 || i>row || j>column)
    return;

    if(grid[i][j]=='@' && flag[i][j]==1)
    {
        flag[i][j]=0;

        floodfill(i+1,j);
        floodfill(i-1,j);
        floodfill(i,j+1);
        floodfill(i,j-1);
        floodfill(i+1,j);
        floodfill(i+1,j+1);
        floodfill(i+1,j-1);
        floodfill(i-1,j+1);
        floodfill(i-1,j-1);
    }

}

int main()
{
    int i,j,cnt;

    while(cin>>row>>column && row && column)
    {
        getchar();
        cnt=0;
        memset(flag,0,sizeof(flag));

        for(i=1; i<=row; i++)
        {
            for(j=1; j<=column; j++)
            {
                cin>>grid[i][j];
                flag[i][j]=1;
            }
        }

        for(i=1; i<=row; i++)
        {
            for(j=1; j<=column; j++)
            {
                if(grid[i][j]=='@' && flag[i][j]==1)
                {
                    cnt++;
                    floodfill(i,j);
                }
            }
        }



        cout<<cnt<<endl;


    }


    return 0;
}
