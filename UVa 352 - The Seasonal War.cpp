#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int size;
char arr[30][30];

void floodfill(int i, int j)
{
    if(i<1 || i>size || j<1 || j>size)
    return ;

    if(arr[i][j]=='1')
    {
        arr[i][j]='0';
        floodfill(i+1,j);
        floodfill(i-1,j);
        floodfill(i,j+1);
        floodfill(i,j-1);
        floodfill(i+1,j+1);
        floodfill(i-1,j+1);
        floodfill(i+1, j-1);
        floodfill(i-1,j-1);

    }
}

int main()
{
    int i,j,tCase=0;

    while(cin>>size)
    {
        //getchar();
        memset(arr,'0',sizeof(arr));
        int cnt=0;
        tCase++;

        //cout<<tCase<<endl;

        for(i=1; i<=size; i++)
        {
            for(j=1; j<=size; j++)
            cin>>arr[i][j];
        }

        for(i=1; i<=size; i++)
        {
            for(j=1; j<=size; j++)
            {
                if(arr[i][j]=='1')
                {
                    cnt++;
                    //cout<<cnt<<endl;
                    floodfill(i,j);
                }
            }
        }

        cout<<"Image number "<<tCase<<" contains "<<cnt<<" war eagles.\n";

    }

    return 0;
}
