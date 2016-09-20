#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    int i,j,k,tCase,n,time;
    string str,temp;
    map<string,int>arr;
    map<string,int>::iterator it;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>n;
        for(j=1; j<=n; j++)
        {
            cin>>str>>time;
            arr[str]=time;
        }
        cin>>time>>str;

        cout<<"Case ";
        if(arr[str]==0 || arr[str]>time+5)
        cout<<i<<": Do your own homework!"<<endl;
        else if(arr[str]<=time)
        cout<<i<<": Yesss"<<endl;
        else if(arr[str]>time && arr[str]<=time+5)
        cout<<i<<": Late"<<endl;

        arr.clear();
    }

    return 0;
}
