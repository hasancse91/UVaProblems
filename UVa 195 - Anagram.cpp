#include<iostream>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

int main()
{
    int t,tCase;
    string str;
    map<string,int> arr;
    map<string,int>::iterator it;


    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>str;

        sort(str.begin(),str.end());

        do
        {
            cout<<str<<endl;
        }
        while(next_permutation(str.begin(),str.end()));
//while (next_permutation(xs, xs + sizeof(xs) - 1));


        /*for(it=arr.begin(); it!=arr.end(); it++)
        {
            cout<<(*it).first<<endl;
        }

        arr.clear();*/


    }


    return 0;
}

