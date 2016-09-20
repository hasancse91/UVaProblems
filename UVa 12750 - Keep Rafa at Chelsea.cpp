#include<iostream>

using namespace std;

int main()
{
    int t,i,j,n,tCase,cnt,flag,tmp;
    char ch;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>n;
        cnt=0,tmp=0;
        for(i=1; i<=n; i++)
        {
            cin>>ch;

            if(ch=='W' && tmp<3)
            {
                tmp=0;
                cnt++;
            }
            else
            {
                if(tmp<3)
                {
                    cnt++;
                    tmp++;
                }

            }
        }

        cout<<"Case "<<t<<": ";

        if(tmp<3)
        cout<<"Yay! Mighty Rafa persists!"<<endl;
        else
        cout<<cnt<<endl;
    }

    return 0;
}

