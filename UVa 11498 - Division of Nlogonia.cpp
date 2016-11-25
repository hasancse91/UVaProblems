#include<iostream>

using namespace std;

int main()
{
    int n,m,x,y,t,tCase;

    while(cin>>tCase && tCase)
    {
        cin>>n>>m;
        while(tCase--)
        {
            cin>>x>>y;

            if(n==x || m==y)
            cout<<"divisa"<<endl;
            else if(x>n && y>m)
            cout<<"NE"<<endl;
            else if(x>n && y<m)
            cout<<"SE"<<endl;
            else if(x<n && y>m)
            cout<<"NO"<<endl;
            else
            cout<<"SO"<<endl;
        }
    }



    return 0;
}
