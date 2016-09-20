#include<iostream>

using namespace std;

char grid[110][110];
int c,r,icnt,flag[110][110];

void func(int i, int j)
{
    if(i<1 || i>r || j<1 || j>c)
    return;

    if(grid[i][j]=='*')
    {
        grid[i][j]='.';
        //flag[i][j]=0;
        icnt++;

        func(i+1,j);
        func(i-1,j);
        func(i,j+1);
        func(i,j-1);
        func(i+1, j+1);
        func(i+1, j-1);
        func(i-1, j+1);
        func(i-1, j-1);
    }


}

int main()
{
    int i,j,num,cnt;

    while(cin>>r>>c && r && c)
    {
        cnt=0;


        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                cin>>grid[i][j];

                if(grid[i][j]=='*')
                flag[i][j]=1;
                else
                flag[i][j]=0;
            }
        }

        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                icnt=0;

                if(grid[i][j]=='*')
                {
                    func(i,j);
                    if(icnt==1)
                    cnt++;
                }

            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}
