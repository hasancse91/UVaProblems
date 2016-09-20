#include<iostream>
#include<string>
#include<map>
#include<sstream>
#include<cstdio>
#include<ctype.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main()
{
    int i,add=0;
    string str,word,temp;
    map<string,int> arr;
    map<string,int>::iterator it;


    while(getline(cin,str))
    {
        temp="";
        for(i=0;i<str.size();i++)
        {
            if(isalpha(str.at(i)))
            {
                temp+=tolower(str.at(i));
            }
            else
            {
                if(temp!="")
                    arr[temp]++;
                temp="";
            }
        }
        if(temp!="")
            arr[temp]++;
    }

    for(it=arr.begin();it!=arr.end();it++)
    {
        cout<<(*it).first<<endl;
    }

    return 0;
}
