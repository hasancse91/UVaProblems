#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    int i,t,tCase,cnt_M,cnt_F;
    string str;

    cin>>tCase;
    getchar();

    for(t=1; t<=tCase; t++)
    {
        getline(cin,str);
        cnt_M=0;
        cnt_F=0;

        for(i=0; i<str.size(); i++)
        {
            if(str.at(i)=='M')
            cnt_M++;
            else if(str.at(i)=='F')
            cnt_F++;
        }

        if(cnt_F==cnt_M && cnt_F>1 && cnt_M>1)
        cout<<"LOOP"<<endl;
        else
        cout<<"NO LOOP"<<endl;

        str="";

    }


    return 0;
}
