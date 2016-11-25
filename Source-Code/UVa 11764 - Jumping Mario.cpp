#include<iostream>

using namespace std;

int main()
{
    int tCase,n,arr[60],high,low,i,j;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>n;
        high=0;
        low=0;

        for(j=0; j<n; j++)
        cin>>arr[j];

        for(j=0; j<n-1; j++)
        {
            if(arr[j+1]>arr[j])
            high++;
            else if(arr[j+1]<arr[j])
            low++;
        }

        cout<<"Case ";
        cout<<i<<": "<<high<<" "<<low<<endl;

    }


    return 0;
}
