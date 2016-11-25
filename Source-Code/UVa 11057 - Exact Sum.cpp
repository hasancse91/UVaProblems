#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[10010],arr1[10010],arr2[10010],i,j,k,n,tk,add;

    while(cin>>n)
    {
        for(i=0; i<n; i++)
        cin>>arr[i];
        cin>>tk;
        add=0;

        sort(arr,arr+n);

        for(i=n-1; i>=1; i--)
        {
            for(j=i-1; j>=0; j--)
            {
                if(arr[i]+arr[j]==tk)
                {
                    arr1[add]=arr[j];
                    arr2[add]=arr[i];

                    add++;
                }
            }

        }


        cout<<"Peter should buy books whose prices are ";
        cout<<arr1[add-1]<<" and "<<arr2[add-1]<<"."<<endl<<endl;


    }
/*
5
10 20 30 40 50
60

10
1 20 34 67 78 34 67 34 56 100
101

8
0 32 23 14 15 16 17 37
37

    Peter should buy books whose prices are 20 and 40.

    Peter should buy books whose prices are 34 and 67.

    Peter should buy books whose prices are 14 and 23.


    */


    return 0;
}
