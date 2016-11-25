#include<iostream>
#include<string>
#include<vector>
#include<cmath>


using namespace std;

int main()
{
    int n,i,tm,pr=0;
    vector<string> vs;
    string tmp,str[]={"Happy","birthday","to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};


    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>tmp;

        vs.push_back(tmp);
    }

    tm=ceil(n/16.0);

    while(tm--)
    {
        for(i=0; i<16; i++)
        {
            cout<<vs[pr++]<<": "<<str[i]<<endl;

            if(pr==n)
            pr=0;
        }
    }




    return 0;
}
