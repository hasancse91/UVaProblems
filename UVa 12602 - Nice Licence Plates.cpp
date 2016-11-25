#include<iostream>

using namespace std;

int main()
{
    int n,min,flag=1;


    while(cin>>n)
    {
        if(n==42)
        flag=0;

        if(flag==1)
        {
            cout<<n<<endl;
        }
    }

    return 0;
}

