#include<iostream>
#include<string>
#include<map>
#include<sstream>
#include<cstdio>

using namespace std;

int main()
{
    int t,tCase,i,j;
    string str,word,final;


    cin>>tCase;
    getchar();
    getchar();

    for(t=1; t<=tCase; t++)
    {


        if(t>1)
        cout<<endl;

        cout<<"Case #"<<t<<":"<<endl;

        while(true)
        {
            getline(cin,str);
            //getchar();

            if(str.size()==0)
            break;

            stringstream ss;
            //getchar();
            int cnt=1;
            final="";

            ss<<str;

            //cout<<str<<"Input"<<endl;

            while(ss>>word)
            {
                //cout<<word<<"(word)"<<endl;
                if(word.size()>=cnt)
                {
                    final+=word[cnt-1];
                    cnt++;
                }
            }


            cout<<final<<endl;

        }



    }


    return 0;
}
/*

2

Hey good lawyer
as I previously previewed
yam does a soup

First give money to Teresa
after I inform dad of
your horrible soup





*/
