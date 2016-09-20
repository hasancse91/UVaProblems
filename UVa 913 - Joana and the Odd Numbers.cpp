#include<iostream>

using namespace std;

int main()
{
    long long int n,result,temp;

    while(cin>>n)
    {
        temp=((n+1)*(n+1))/4;
        temp=2*temp-1;
        result=3*temp-6;

        cout<<result<<endl;
    }


    return 0;
}
