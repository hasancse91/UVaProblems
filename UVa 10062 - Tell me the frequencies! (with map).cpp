#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    int i,j,k,tCase=0,temp;
    string str,country,name;
    map<int,int> arr;
    map<int,int>::iterator it;

    while(cin>>str)
    {
        if(tCase>0)
        cout<<endl;
        tCase++;

        for(i=0; str[i]; i++)
        {
            temp=(int)str[i];
            arr[temp]++;
        }

        for(it=arr.begin();it!=arr.end();it++)
        {
            cout<<(*it).first<<" "<<(*it).second<<endl;
        }

        arr.clear();
    }


    return 0;
}


