#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>

using namespace std;

int cnt=0,flag[110][110],row,col,temp;
char grid[110][110];

void floodfill(int i, int j)
{
    if(i<1 || i>row || j<1 || j>col)
    return ;

    if(grid[i][j]=='W' && flag[i][j]==0)
    {
        flag[i][j]=1;
        cnt++;

        floodfill(i+1,j);
        floodfill(i-1,j);
        floodfill(i,j+1);
        floodfill(i,j-1);
        floodfill(i+1,j+1);
        floodfill(i+1, j-1);
        floodfill(i-1, j+1);
        floodfill(i-1,j-1);

    }
}

int main()
{
    int i,j=1,k,a,b,t,tCase,one;
    char tmp[110];

    cin>>tCase;
    scanf("\n");
    for(t=1; t<=tCase; t++)
    {
        i=1;
        if(t>1)
        cout<<endl;

        while(gets(tmp) && tmp[0])
        {
            if(tmp[0]=='L' || tmp[0]=='W')
            {
                for(j=0; tmp[j]; j++)
                {
                    grid[i][j+1]=tmp[j];
                }

                i++;

                row=i-1;
                col=j;

            }
            else
            {
                //cout<<row<<" "<<col;
                a=0,b=0;

                for(i=0; tmp[i]!=' '; i++)
                a=a*10+tmp[i]-'0';

                for(i=i+1; tmp[i]; i++)
                b=b*10+tmp[i]-'0';

                //cout<<a<<" "<<b<<endl;
                for(i=1; i<=row; i++)
                {
                    for(j=1; j<=col; j++)
                    flag[i][j]=0;
                }

                cnt=0;
                floodfill(a,b);
                cout<<cnt<<endl;
            }


        }


    }



    return 0;
}
