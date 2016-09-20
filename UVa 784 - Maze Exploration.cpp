#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
char grid[100][100],str[100];
bool flag[100][100];

void floodfil(int x, int y)
{


    if((grid[x][y]==' ' || grid[x][y]=='*') && flag[x][y]==0)
    {
        flag[x][y]=1;
        grid[x][y]='#';
        //cout<<"ON x, y --> "<<x<<" "<<y<<endl;

        floodfil(x+1,y);
        floodfil(x-1,y);
        floodfil(x,y+1);
        floodfil(x,y-1);
    }

if(grid[x][y]!=' ')
    {
        //cout<<"OFF x, y --> "<<x<<" "<<y<<endl;
        return ;
    }

}

int main()
{
    int i,j,t,tCase,cnt,lin,x,y;

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);


    scanf("%d",&tCase);
    getchar();

    for(t=1; t<=tCase; t++)
    {
        lin=0;
        memset(flag,0,sizeof(flag));
        memset(grid,NULL,sizeof(grid));


        while(gets(str))
        {
            if(str[0]=='_')
            break;

            if(strstr(str,"*"))
            {
                for(i=0; str[i]; i++)
                {
                    if(str[i]=='*')
                    {
                        x=lin;
                        y=i;
                        break;
                    }
                }
                //printf("x,y = %d %d\n",x,y);

            }

            strcpy(grid[lin],str);
            lin++;
        }

        floodfil(x,y);
        //grid[x+1][y]='#';
/*
        for(i=0; i<lin; i++)
        {
            for(j=0; j<26; j++)
            printf("%c",grid[i][j]);
            puts("");

        }
        puts(str);

*/
        for(i=0; i<lin; i++)
        {
            puts(grid[i]);
        }
        puts(str);


    }


    return 0;
}
