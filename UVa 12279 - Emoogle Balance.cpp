#include<iostream>

using namespace std;

int main()
{
    int n,arr[1010],i,cnt=0,t=0;

    while(cin>>n && n)
    {
        t++;

        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
            cnt++;
        }

        cout<<"Case "<<t<<": "<<n-cnt*2<<endl;
        cnt=0;

    }


    return 0;
}
