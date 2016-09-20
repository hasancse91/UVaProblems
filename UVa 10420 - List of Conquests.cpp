#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    int i,j,k,tCase;
    string str,country,name;
    map<string,int> arr;
    map<string,int>::iterator it;

    while(cin>>tCase)
    {

        for(i=1; i<=tCase; i++)
        {
            cin>>country;
            getline(cin,name);

            arr[country]++;
        }

        for(it=arr.begin();it!=arr.end();it++)
        {
            cout<<(*it).first<<" "<<(*it).second<<endl;
        }
        arr.clear();
    }


    return 0;
}
