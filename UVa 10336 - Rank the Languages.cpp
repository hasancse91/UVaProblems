#include<iostream>
#include<algorithm>
#define MAX 10000

using namespace std;

int n,row,column,flag[MAX][MAX],count[30];
char grid [MAX][MAX];

struct info
{
    char letter;
    int freq;
};

void floodfill(int i, int j, char ch)
{
    if(i<1 || i>row || j<1 || j>column)
    return;

    if(grid[i][j]==ch && flag[i][j]==1)
    {
        flag[i][j]=0;

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
    int t,tCase,i,j,pos;
    char ch;
    info arr[27];

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>row>>column;

        for(i=1; i<=26; i++)
        arr[i].freq=0;

        for(i=1; i<=row; i++)
        {
            for(j=1; j<=column; j++)
            {
                cin>>grid[i][j];
                flag[i][j]=1;
            }
        }

        for(i=1; i<=row; i++)
        {
            for(j=1; j<=column; j++)
            {
                if(flag[i][j]==1)
                {
                    ch=grid[i][j];
                    pos=ch-96;
                    arr[pos].freq++;
                    arr[pos].letter=ch;
                    floodfill(i,j,ch);
                }
            }
        }


        sort(arr+1,arr+27,comp);


        cout<<"World #"<<t<<endl;
        for(i=1; i<=26; i++)
        {
            if(arr[i].freq>0)
            cout<<arr[i].letter<<": "<<arr[i].freq<<endl;
        }
    }

    return 0;
}
