#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int tCase,n,flag,i,j,k;
    string str;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>n;

        getchar();

        if(i>1)
        cout<<endl;

        cout<<"Case "<<i<<":"<<endl;

        for(j=1; j<=n; j++)
        {
            getline(cin,str);
            flag=1;
            for(k=0; k<str.size(); k++)
            {
                if(str[k]!=32)
                {
                    cout<<str[k];
                    flag=1;
                }
                else if(flag==1)
                {
                    cout<<" ";
                    flag=0;
                }
            }

            cout<<endl;

        }
    }


    return 0;
}
