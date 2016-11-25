#include<iostream>


using namespace std;

int main()
{
    int i,j,k,arr[50],sum,n,tCase=1,temp=0;

    while(cin>>n)
    {
        int flag=1;

        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(temp>arr[i])
            flag=0;

            temp=arr[i];
        }


        if(flag)
        {
            for(i=n-1; i>=0; i--)
            {

            }

        }
        else
        cout<<"Not sorted"<<endl;


    }

    return 0;
}
