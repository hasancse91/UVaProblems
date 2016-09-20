#include<iostream>

using namespace std;

char grid[25][25],ch;
bool flag[25][25];
int m,n,maxi,cnt;

void floodfill(int i, int j)
{
    if(i<0)
    return;

    if(j==n)
    j=0;
    else if(j==-1)
    {
        j=n-1;
    }

    if(grid[i][j]==ch && flag[i][j]==0)
    {
        flag[i][j]=1;
        cnt++;

        floodfill(i+1,j);
        floodfill(i-1,j);
        floodfill(i,j+1);
        floodfill(i,j-1);
    }
}

int main()
{
    int i,j,x,y;


    while(cin>>m>>n)
    {
        maxi=0;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>grid[i][j];
                flag[i][j]=0;

            }
        }

        cin>>x>>y;
        ch=grid[x][y];


        floodfill(x,y);


        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(grid[i][j]==ch && flag[i][j]==0)
                {
                    cnt=0;
                    floodfill(i,j);
                    if(maxi<cnt)
                    maxi=cnt;
                }
            }
        }

        cout<<maxi<<endl;

    }

    return 0;
}

