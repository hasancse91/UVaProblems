#include<iostream>
#include<cmath>

using namespace std;

int grid[11][11],n,sum;
bool flag[11][11];

void func(int i, int j)
{
    int m,k;

    for(m=i; m<=n-i+1; m++)
    {
        sum+=grid[i][m]+grid[m][i];
        flag[i][m]=1,flag[m][i]=1;

        if(m==i)
        sum-=grid[i][i];

        //cout<<grid[i][m]<<" + "<<grid[m][i]<<" + ";
    }
    //cout<<endl;

    for(m=i+1; m<=n-i+1; m++)
    {
        sum+=grid[n-i+1][m]+grid[m][n-i+1];
        flag[n-i+1][m]=1,flag[m][n-i+1];

        if(m==n-i+1)
        sum-=grid[m][m];

        //cout<<grid[n-i+1][m]<<" # "<<grid[m][n-i+1]<<" # ";
    }

}

int main()
{
    int i,j,range,t=1;

    while(cin>>n && n)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>grid[i][j];
                flag[i][j]=0;
            }
        }

        range=ceil(n/2.0);
        cout<<"Case "<<t++<<":";
        for(i=1; i<=range; i++)
        {
            sum=0;
            func(i,i);
            cout<<" "<<sum;
        }
        cout<<endl;
    }



    return 0;
}
