#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i,j,n,val,tCase=1;
    long long mul,max;

    while(cin>>n)
    {
        int arr[n];
        max=0;

        for(i=0; i<n; i++)
        cin>>arr[i];

        getchar();

        for(i=0; i<n; i++)
        {
            mul=1;
            for(j=i; j<n; j++)
            {
                mul=mul*arr[j];

                if(max<mul)
                max=mul;
            }
        }

        cout<<"Case #"<<tCase<<": The maximum product is "<<max<<"."<<endl<<endl;
        tCase++;
    }


    return 0;
}
