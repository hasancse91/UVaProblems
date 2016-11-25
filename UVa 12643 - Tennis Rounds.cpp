#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,a,b,i,j,cnt;

    while(cin>>n>>a>>b)
    {
        cnt=0;
        while(a!=b)
        {
            a=ceil(a/2.0);
            b=ceil(b/2.0);
            cnt++;
        }

        cout<<cnt<<endl;
    }


    return 0;
}

