#include<iostream>
#include<algorithm>

using namespace std;

int row,col,flag[51][51],cnt;
char grid[55][55];

struct info
{
    char letter;
    int freq;
};

void floodfill(int i, int j, char ch)
{
    if(i<1 || j<1 || i>row || j>col)
    return;

    if(grid[i][j]==ch && flag[i][j]==0)
    {
        cnt++;
        flag[i][j]=1;

        floodfill(i+1, j, ch);
        floodfill(i-1, j, ch);
        floodfill(i, j+1, ch);
        floodfill(i, j-1, ch);
    }
}

bool comp(info a, info b)
{
    if(a.freq>b.freq)
    return true;
    else if(a.freq==b.freq)
    {
        if(a.letter<b.letter)
        return true;
        else
        return false;
    }

    return false;
}

int main()
{
    int i,j,add,t=1;
    info arr[2510];

    while(cin>>row>>col && row && col)
    {
        add=0;
        for(i=1; i<=row; i++)
        {
            for(j=1; j<=col; j++)
            {
                cin>>grid[i][j];
                flag[i][j]=0;
            }
        }

        for(i=1; i<=row; i++)
        {
            for(j=1; j<=col; j++)
            {
                if(grid[i][j]!='.' && flag[i][j]==0)
                {
                    arr[add].letter=grid[i][j];
                    cnt=0;
                    floodfill(i,j,grid[i][j]);
                    arr[add].freq=cnt;
                    //cout<<"ADD: "<<add<<" "<<grid[i][j]<<" CNT: "<<cnt<<endl;
                    add++;
                }
            }
        }
        //cout<<"ADD: "<<add<<endl;

        sort(arr, arr+add, comp);

        cout<<"Problem "<<t++<<":\n";
        for(i=0; i<add; i++)
        {
            cout<<arr[i].letter<<" "<<arr[i].freq<<endl;
        }

    }


    return 0;
}
