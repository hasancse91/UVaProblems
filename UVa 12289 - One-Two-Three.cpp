#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int i,tCase,j,cnt;
    string str;

    cin>>tCase;
    getchar();

    for(i=1; i<=tCase; i++)
    {
        cin>>str;

        if(str.size()==5)
        cout<<3;
        else if((str[0]=='o' && str[1]=='n') || (str[1]=='n' && str[2]=='e') || (str[0]=='o' && str[2]=='e'))
        cout<<1;
        else
        cout<<2;

        cout<<endl;
    }


    return 0;
}

    /*
    #include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int i,tCase,j,cnt;
    string str;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>str;

        if(str.size()>3)    cout<<'3';
        else
        {
            int val=(str.at(0)=='o')+(str.at(1)=='n')+(str.at(2)=='e');
            if(val>=2)
                cout<<'1';
            else
                cout<<'2';
        }
        cout<<endl;
    }


    return 0;
}*/


