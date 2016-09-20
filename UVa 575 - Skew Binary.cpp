#include<iostream>


using namespace std;

int pow(int a, int b)
{
    int i,res=1;

    for(i=1; i<=b; i++)
    res*=a;

    return res;
}

int main()
{
    long long int i,j,k,res,len,temp;
    string arr;

    while(true)
    {
        cin>>arr;

        len=arr.length();

        if(len==1 && arr[0]=='0')
        break;

        res=0;

        for(i=0; arr[i]; i++)
        {
            temp=pow(2,len)-1;
            res=res+(arr[i]-'0')*temp;
            len--;
        }

        cout<<res<<endl;
    }


    return 0;
}
