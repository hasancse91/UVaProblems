#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>

using namespace std;

int row,flag,final=0,check[210][210];
char grid[210][210],ch;

void floodfill(int i, int j)
{
    if(i<1 || i>row || j<1 || j>row)
    return ;

    if(grid[i][j]=='w' && check[i][j]==1)
    {
        if(j==row)
        {
            final=1;
            //return ;
        }
        check[i][j]=0;

        floodfill(i-1,j-1);
        floodfill(i,j-1);
        floodfill(i+1,j);
        floodfill(i-1,j);
        floodfill(i,j+1);
        floodfill(i+1,j+1);

    }
}

int main()
{
    int i,j,k,num,tCase=0;

    while(cin>>row && row)
    {
        //memset(check,0,sizeof(check));
        flag=0;
        final=0;
        tCase++;
        getchar();
        for(i=1; i<=row; i++)
        {
            for(j=1; j<=row; j++)
            {
                cin>>grid[i][j];

                if(grid[i][j]=='w')
                check[i][j]=1;
                else
                check[i][j]=0;

            }
        }


        for(i=1; i<=row; i++)
        {
            if(grid[i][1]=='w' && check[i][1]==1)
            floodfill(i,1);
        }

        if(final==1)
        cout<<tCase<<" W\n";
        else
        cout<<tCase<<" B\n";




    }


    return 0;
}
