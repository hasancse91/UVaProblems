#include<iostream>
#include<string>


using namespace std;

int main()
{
    int i,j,k,tCase=1;
    string str;

    while(true)
    {
        cin>>str;
        if(str.at(0)=='*')
        break;

        if(str=="Hajj")
        cout<<"Case "<<tCase++<<": Hajj-e-Akbar"<<endl;
        else
        cout<<"Case "<<tCase++<<": Hajj-e-Asghar"<<endl;

    }


    return 0;
}
