#include<bits/stdc++.h>
using namespace std;

char grid[60][60];
bool flag[60][60];
int w,h,cnt,f;
vector <int> dice;

void floodfillFinal1(int x,int y);
void floodfillFinal2(int x,int y);
void floodfillFinal3(int x,int y);
void floodfillFinal4(int x,int y);

void floodfillFinal1(int x,int y)
{
    if(x<0 || y<0 || x>=h || y>=w || flag[x][y]==1 || grid[x][y]=='.')
    return;

    //cout<<"x,y -> "<<x<<" , "<<y<<endl;

    if(flag[x][y]==0)
    {
        if(grid[x][y]=='X')
        {
            cnt++;
        }

        floodfillFinal1(x+1,y);
        floodfillFinal2(x-1,y);
        floodfillFinal3(x,y+1);
        floodfillFinal4(x,y-1);

        flag[x][y]=1;
        //floodfillFinal1(x+1,y);

    }

}
void floodfillFinal2(int x,int y)
{
    if(x<0 || y<0 || x>=h || y>=w || flag[x][y]==1 || grid[x][y]=='.')
    return;

    //cout<<"x,y -> "<<x<<" , "<<y<<endl;

    if(flag[x][y]==0)
    {
        if(grid[x][y]=='X')
        {
            cnt++;
        }

        floodfillFinal1(x+1,y);
        floodfillFinal2(x-1,y);
        floodfillFinal3(x,y+1);
        floodfillFinal4(x,y-1);

        flag[x][y]=1;
        //floodfillFinal2(x-1,y);

    }

}
void floodfillFinal3(int x,int y)
{
    if(x<0 || y<0 || x>=h || y>=w || flag[x][y]==1 || grid[x][y]=='.')
    return;

    //cout<<"x,y -> "<<x<<" , "<<y<<endl;

    if(flag[x][y]==0)
    {
        if(grid[x][y]=='X')
        {
            cnt++;
        }

        floodfillFinal1(x+1,y);
        floodfillFinal2(x-1,y);
        floodfillFinal3(x,y+1);
        floodfillFinal4(x,y-1);

        flag[x][y]=1;
        //floodfillFinal3(x,y+1);

    }

}
void floodfillFinal4(int x,int y)
{
    if(x<0 || y<0 || x>=h || y>=w || flag[x][y]==1 || grid[x][y]=='.')
    return;

    //cout<<"x,y -> "<<x<<" , "<<y<<endl;

    if(flag[x][y]==0)
    {
        if(grid[x][y]=='X')
        {
            cnt++;
        }

        floodfillFinal1(x+1,y);
        floodfillFinal2(x-1,y);
        floodfillFinal3(x,y+1);
        floodfillFinal4(x,y-1);

        flag[x][y]=1;
        //floodfillFinal4(x,y-1);

    }

}


void floodfill(int x,int y)
{
    if(x<0 || y<0 || x>=h || y>=w || flag[x][y]==1 || grid[x][y]=='.')
    return;

    if(flag[x][y]==0)
    {
        if(grid[x][y]=='X' && f==1)
        {
            cout<<"i,j -> "<<x<<" , "<<y<<endl;
            cnt++;

            floodfillFinal1(x+1,y);
            floodfillFinal2(x-1,y);
            floodfillFinal3(x,y+1);
            floodfillFinal4(x,y-1);

            dice.push_back(cnt);
            cout<<"CNT->> "<<cnt<<endl;
            f=0;
        }

        flag[x][y]=1;

        floodfill(x+1,y);
        floodfill(x-1,y);
        floodfill(x,y+1);
        floodfill(x,y-1);
    }

}

int main()
{
    int i,j,t=1;

    while(scanf("%d %d",&w,&h)==2)
    {
        if(w==0 && h==0)
        break;

        for(i=0; i<h; i++)
        {
            getchar();
            for(j=0; j<w; j++)
            {
                scanf("%c",&grid[i][j]);
                flag[i][j]=0;
            }
        }

        /*
        for(i=0; i<h; i++)
        {
            for(j=0; j<w; j++)
            {
                printf("%c",grid[i][j]);
            }
            puts("");
        }
        */

        for(i=0; i<h; i++)
        {
            for(j=0; j<w; j++)
            {
                if(grid[i][j]=='*' && flag[i][j]==0)
                {
                    cnt=0;
                    f=1;
                    floodfill(i,j);

                }

            }

        }

        sort(dice.begin(), dice.end());

        printf("Throw %d\n",t++);
        for(i=0; i<dice.size(); i++)
        {
            if(i==0)
            printf("%d",dice[i]);
            else
            printf(" %d",dice[i]);
        }
        puts("");

        dice.clear();

    }

    return 0;
}
