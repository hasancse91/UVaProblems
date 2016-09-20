#include<bits/stdc++.h>

using namespace std;

struct data
{
    int index;
    string str;
};

int main()
{
    int t,tCase,ind,i;
    string first,sec,temp;
    data arr[10000];

    cin>>tCase;
    getchar();
    for(t=1; t<=tCase; t++)
    {
        getchar();

        getline(cin,first);
        getline(cin,sec);
        stringstream ss1(first),ss2(sec);
        i=1;

        while(ss1>>ind)
        {
            ss2>>temp;
            arr[ind].str=temp;
            i++;
        }

        if(t>1)
        cout<<endl<<".";

        for(int j=0; j<i; j++)
        cout<<arr[j].str<<endl;

    }


    return 0;
}
