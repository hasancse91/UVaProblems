#include<stdio.h>
#include<string.h>

char grid[110][110];
bool flag[110][110];
int n;

void floodfil(int x, int y)
{
    if(x<0 || x>=n || y<0 || y>=n)
    return ;

    if((grid[x][y]=='x' || grid[x][y]=='@') && flag[x][y]==0)
    {
        flag[x][y]=1;

        floodfil(x+1,y);
        floodfil(x-1,y);
        floodfil(x,y+1);
        floodfil(x,y-1);
    }

}

int main()
{
    int i,j,t,tCase,cnt;


    scanf("%d",&tCase);

    for(t=1; t<=tCase; t++)
    {
        scanf("%d",&n);
        cnt=0;
        for(i=0; i<n; i++)
        {
            getchar();
            for(j=0; j<n; j++)
            {
                scanf("%c",&grid[i][j]);
                flag[i][j]=0;
            }
        }
/*
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%c",grid[i][j]);

            }
            puts("");
        }
*/


        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(grid[i][j]=='x' && flag[i][j]==0)
                {
                    floodfil(i,j);
                    cnt++;
                }
            }
        }

        printf("Case %d: %d\n",t,cnt);

    }


    return 0;
}
