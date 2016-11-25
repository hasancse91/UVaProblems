#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int tCase,i,n,res,arr[30];

    cin>>tCase;

    while(tCase--)
    {
        res=0;
        cin>>n;
        for(i=0; i<n; i++)
        cin>>arr[i];

        sort(arr,arr+n);

        for(i=0; i<n-1; i++)
        {
            res=res+(arr[i+1]-arr[i]);
        }
        res=res+(arr[n-1]-arr[0]);

        cout<<res<<endl;
    }



    return 0;
}
