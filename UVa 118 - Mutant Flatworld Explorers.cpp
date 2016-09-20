#include<bits/stdc++.h>

using namespace std;

int main()
{
    int hx,hy,x,y,i,j;
    char dir;
    string str;
    bool grid[60][60],flag;

    scanf("%d %d",&hx,&hy);
    memset(grid,false,sizeof(grid));

    while(scanf("%d %d %c",&x,&y,&dir)==3)
    {
        cin>>str;
        flag=false;

        for(i=0; str[i]; i++)
        {
            if(dir=='E')
            {
                if(str[i]=='L')
                    dir='N';
                else if(str[i]=='R')
                    dir='S';
                else//F
                {
                    if(x+1>hx)
                    {
                        if(grid[x][y]==false)
                        {
                            grid[x][y]=true; //put a scent robot
                            flag=true; //first time lost in this position
                            break;
                        }
                    }
                    else// if(x+1<=hx || grid[x][y]==true)
                    x++;
                }
                //cout<<"From E "<<x<<","<<y<<" "<<dir<<endl;
            }
            else if(dir=='W')
            {
                if(str[i]=='L')
                    dir='S';
                else if(str[i]=='R')
                    dir='N';
                else//F
                {
                    if(x-1<0)
                    {
                        if(grid[x][y]==false)
                        {
                            grid[x][y]=true; //put a scent robot
                            flag=true; //first time lost in this position
                            break;
                        }

                    }
                    else// if(x-1<0 || grid[x][y]==true)
                    x--;
                }
                //cout<<"From W "<<x<<","<<y<<" "<<dir<<endl;
            }
            else if(dir=='N')
            {
                if(str[i]=='L')
                    dir='W';
                else if(str[i]=='R')
                    dir='E';
                else//F
                {
                    if(y+1>hy)
                    {
                        if(grid[x][y]==false)
                        {
                            grid[x][y]=true; //put a scent robot
                            flag=true; //first time lost in this position
                            break;
                        }

                    }
                    else// if(y+1>hy || grid[x][y]==true)
                    y++;
                }
                //cout<<"From N "<<x<<","<<y<<" "<<dir<<endl;
            }
            else//S
            {
                if(str[i]=='L')
                    dir='E';
                else if(str[i]=='R')
                    dir='W';
                else//F
                {
                    if(y-1<0)
                    {
                        if(grid[x][y]==false)
                        {
                            grid[x][y]=true; //put a scent robot
                            flag=true; //first time lost in this position
                            break;
                        }

                    }
                    else// if(y-1<0 || grid[x][y]==true)
                    y--;
                }
                //cout<<"From S "<<x<<","<<y<<" "<<dir<<endl;
            }

        }

        printf("%d %d %c",x,y,dir);
        if(flag==true)
        printf(" LOST");
        puts("");

    }

    return 0;
}
