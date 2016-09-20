#include<iostream>

using namespace std;

int main()
{
    int x1,y1,x2,y2,flag,i,j;

    while(cin>>x1>>y1>>x2>>y2)
    {
        if(x1==0 && x2==0 && y1==0 && y2==0)
        break;

        flag=0;

        if(x1==x2 && y1==y2)
        cout<<0<<endl;
        else if((x1==x2 && y1!=y2) || (x1!=x2 && y1==y2))
        cout<<1<<endl;
        else
        {
            if(x2<x1 && y2<y1)
            {
                for(i=x1-1,j=y1-1; i>0 && j>0; i--,j--)
                {
                    if(i==x2 && j==y2)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            else if(x2>x1 && y2<y1)
            {
                for(i=x1+1,j=y1-1; i<=8 && j>0; i++,j--)
                {
                    if(i==x2 && j==y2)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            else if(x2>x1 && y2>y1)
            {
                for(i=x1+1,j=y1+1; i<=8 && j<=8; i++,j++)
                {
                    if(i==x2 && j==y2)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            else
            {
                for(i=x1-1,j=y1+1; i>0 && j<=8; i--,j++)
                {
                    if(i==x2 && j==y2)
                    {
                        flag=1;
                        break;
                    }
                }
            }

            if(flag==1)
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }


    }


    return 0;
}

