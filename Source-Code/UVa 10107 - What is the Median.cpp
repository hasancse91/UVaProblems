#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    int i=0,j,k,n,add=0;
    vector <int> arr;


    while(cin>>n)
    {

        arr.push_back(n);

        sort(arr.begin(),arr.end());

        if(add%2==0)//ODD element
        cout<<arr[ceil(add/2)]<<endl;
        else//EVEN element
        cout<<(arr[add/2]+arr[add/2+1])/2<<endl;

        add++;
    }


    return 0;
}

