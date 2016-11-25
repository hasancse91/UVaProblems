#include<iostream>
#include<map>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int t,tCase,n,i,j,val,cost;
    double res;
    char ch;
    string str;
    map<char,int> arr;
    map<char,int>::iterator it;


    cin>>tCase;
    for(t=1; t<=tCase; t++)
    {
        cin>>n;
        getchar();
        cost=0;
        for(i=1; i<=n; i++)
        {
            cin>>ch>>val;

            arr[ch]=val;
        }


        cin>>n;
        getchar();

        for(i=1; i<=n; i++)
        {
            getline(cin,str);
            for(j=0; j<str.size(); j++)
            {
                if(arr[str.at(j)]>0)
                cost+=arr[str.at(j)];
            }
        }
        res=(double)cost/100.0;
        printf("%.2f$\n",res);

        arr.clear();
    }


    return 0;
}
