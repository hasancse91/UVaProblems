#include<iostream>
#include<cstdio>
#include<string.h>
#include<cmath>


using namespace std;

int main()
{
    int i,j,k,x,l,n,len,tCase,root,add;
    char grid[110][110];
    char str[10002];

    cin>>tCase;
    getchar();

    for(x=1; x<=tCase; x++)
    {

        gets(str);

        len=strlen(str);
        root=sqrt(len);

        if(root*root!=len)
        {
            cout<<"INVALID";
        }
        else
        {
            add=0;
            for(i=0; i<root; i++)
            {
                for(j=0; j<root; j++)
                grid[i][j]=str[add++];
            }

        for(i=0; i<root; i++)
            {
                for(j=0; j<root; j++)
                cout<<grid[j][i];
            }
        }
        cout<<endl;

    }


    return 0;
}
