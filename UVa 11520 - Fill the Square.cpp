#include<iostream>

using namespace std;

int main()
{
    int tCase,t,n,i,j,k;
    char grid[20][20],ch;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>n;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                cin>>grid[i][j];
        }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(grid[i][j]=='.')
                for(ch='A'; ch<='Z'; ch++)
                {
                    if(grid[i+1][j]!=ch && grid[i-1][j]!=ch && grid[i][j+1]!=ch && grid[i][j-1]!=ch)
                    {
                        grid[i][j]=ch;
                        break;
                    }
                }

            }
        }

        cout<<"Case "<<t<<":"<<endl;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                cout<<grid[i][j];
                cout<<endl;
        }

    }

    return 0;
}
