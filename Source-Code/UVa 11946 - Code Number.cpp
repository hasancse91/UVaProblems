#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int i,j,tCase;
    string text;

    cin>>tCase;
    getchar();

    for(j=1; j<=tCase; j++)
    {


        while(getline(cin,text))
        {
            if(text=="")
            break;

            for(i=0; i<text.size(); i++)
            {
                if(text.at(i)=='1')
                cout<<"I";
                else if(text.at(i)=='2')
                cout<<"Z";
                else if(text.at(i)=='3')
                cout<<"E";
                else if(text.at(i)=='4')
                cout<<"A";
                else if(text.at(i)=='5')
                cout<<"S";
                else if(text.at(i)=='6')
                cout<<"G";
                else if(text.at(i)=='7')
                cout<<"T";
                else if(text.at(i)=='8')
                cout<<"B";
                else if(text.at(i)=='9')
                cout<<"P";
                else if(text.at(i)=='0')
                cout<<"O";
                else
                cout<<text.at(i);

            }
            cout<<endl;
        }

        if(j!=tCase)
        cout<<endl;

    }


    return 0;
}
