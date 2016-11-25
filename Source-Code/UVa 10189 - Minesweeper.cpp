#include<iostream>
#include<cstring>

using namespace std;

int cnt[105][105];

int main()
{
    int i,j,tCase=1,m,n,cal;
    char grid[105][105];

    while(cin>>n>>m)
    {
        if(m==0 && n==0)
        break;


        if(tCase>1)
        cout<<endl;

        cout<<"Field #"<<tCase++<<":"<<endl;


        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cin>>grid[i][j];
                cnt[i][j]=0;

            }
        }


        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(grid[i][j]=='*')
                {
                    cnt[i][j]=-1;

                    cnt[i+1][j]++;
                    cnt[i-1][j]++;
                    cnt[i+1][j+1]++;
                    cnt[i+1][j-1]++;
                    cnt[i-1][j+1]++;
                    cnt[i-1][j-1]++;
                    cnt[i][j+1]++;
                    cnt[i][j-1]++;

                }

            }
        }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(grid[i][j]=='*')
                    cout<<grid[i][j];
                else
                    cout<<cnt[i][j];

            }
            cout<<endl;
        }



    }

    return 0;
}
/*
4 4
*...
....
.*..
....

Field #1:
*100
2210
1*10
1110

Field #2:
**100
33200
1*100
*/
