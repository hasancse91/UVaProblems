#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int road[1000],n,tCase,i,j,sum;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>n;

        for(j=0; j<n; j++)
        cin>>road[j];

        sort(road,road+n);

        sum=0;
        for(j=0; j<n; j++)
        {
            sum=sum+abs(road[j]-road[(n-1)/2]);
        }

        cout<<sum<<endl;
    }


/*
1
5
10 15 20 500 40
*/

    return 0;
}
