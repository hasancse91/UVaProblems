#include<iostream>

using namespace std;

int main()
{
    string str;
    int i;

    while(cin>>str)
    {
        for(i=0; str[i]; i++)
        {
            if(str[i]>='A' && str[i]<='C')
            cout<<2;
            else if(str[i]>='D' && str[i]<='F')
            cout<<3;
            else if(str[i]>='G' && str[i]<='I')
            cout<<4;
            else if(str[i]>='J' && str[i]<='L')
            cout<<5;
            else if(str[i]>='M' && str[i]<='O')
            cout<<6;
            else if(str[i]>='P' && str[i]<='S')
            cout<<7;
            else if(str[i]>='T' && str[i]<='V')
            cout<<8;
            else if(str[i]>='W' && str[i]<='Z')
            cout<<9;
            else
            cout<<str[i];
        }
        cout<<endl;
    }


    return 0;
}

