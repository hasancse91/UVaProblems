#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int i,j,t,tCase,len;
    string strT,strJ,str1,str2;

    cin>>tCase;
    getchar();

    for(t=1; t<=tCase; t++)
    {
        getline(cin,strT);
        getline(cin,strJ);

        if(strT==strJ)
        cout<<"Case "<<t<<": Yes"<<endl;
        else
        {
            for(i=0; i<strT.size(); i++)
            {
                if(strT.at(i)!=' ')
                str1+=strT.at(i);
            }
            for(i=0; i<strJ.size(); i++)
            {
                if(strJ.at(i)!=' ')
                str2+=strJ.at(i);
            }

            if(str1==str2)
            cout<<"Case "<<t<<": Output Format Error"<<endl;
            else
            cout<<"Case "<<t<<": Wrong Answer"<<endl;

            str1="";
            str2="";

        }


    }


    return 0;
}
