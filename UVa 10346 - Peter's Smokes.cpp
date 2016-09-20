#include<iostream>

using namespace std;

int main()
{
    long long int n,k,sum;

    while(cin>>n>>k)
    {
        sum=n;
        while(n>=k)
        {
            sum=sum+n/k;
            n=n/k+n%k;
        }

        cout<<sum<<endl;
    }


    return 0;
}
