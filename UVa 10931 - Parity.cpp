#include<iostream>
#include<string>

using namespace std;


int binary(int num)
{
    int rem,res=0;

    if(num==0)
    return 0;

    rem=num%2;
    res=res*10+rem;
    num=num/10;

    //cout<<rem;

    binary(num/10);

    return res;
}



int main()
{
    int i,n,bin;

    while(cin>>n && n)
    {
        bin=binary(n);

        cout<<bin;
    }


    return 0;
}
