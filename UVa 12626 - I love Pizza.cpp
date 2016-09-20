#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    int t,tCase,i,j,arr[6],cnt;
    string str;

    cin>>tCase;
    getchar();

    for(t=1; t<=tCase; t++)
    {
        getline(cin,str);

        memset(arr,0,sizeof(arr));

        for(i=0; i<str.size(); i++)
        {
            if(str.at(i)=='A')
            arr[0]++;
            else if(str.at(i)=='G')
            arr[1]++;
            else if(str.at(i)=='I')
            arr[2]++;
            else if(str.at(i)=='M')
            arr[3]++;
            else if(str.at(i)=='R')
            arr[4]++;
            else if(str.at(i)=='T')
            arr[5]++;
        }

        arr[0]=arr[0]/3;
        arr[4]=arr[4]/2;

        sort(arr,arr+6);

        cout<<arr[0]<<endl;

        str="";

    }


    return 0;
}
