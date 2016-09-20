#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i=1;
    string str;

    while(cin>>str)
    {
        if(str=="#")
        break;

        if(str=="HELLO")
        cout<<"Case "<<i<<": ENGLISH"<<endl;
        else if(str=="HOLA")
        cout<<"Case "<<i<<": SPANISH"<<endl;
        else if(str=="HALLO")
        cout<<"Case "<<i<<": GERMAN"<<endl;
        else if(str=="BONJOUR")
        cout<<"Case "<<i<<": FRENCH"<<endl;
        else if(str=="CIAO")
        cout<<"Case "<<i<<": ITALIAN"<<endl;
        else if(str=="ZDRAVSTVUJTE")
        cout<<"Case "<<i<<": RUSSIAN"<<endl;
        else
        cout<<"Case "<<i<<": UNKNOWN"<<endl;

        i++;
    }


    return 0;
}
