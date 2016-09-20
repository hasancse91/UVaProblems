#include<iostream>
#include<map>
#include<sstream>

using namespace std;

int main()
{
    map <string, string> mp;
    string a,b,c,s;
    stringstream fin;



    while(getline(cin,s))
    {
        if(s=="")
        break;

        istringstream fin(s);

        while(!fin.eof())
        {
            fin>>a>>b;
            mp[b]=a;
        }
    }


    while(cin>>c)
    {
        if(mp.count(c))
        cout<<mp[c]<<endl;
        else
        cout<<"eh\n";
    }


    return 0;
}

