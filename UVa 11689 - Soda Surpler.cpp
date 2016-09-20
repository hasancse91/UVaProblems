#include<iostream>

using namespace std;

int main()
{
    int i,tCase,a,b,bot,cnt,num;

    cin>>tCase;

    while(tCase--)
    {
        cin>>a>>b>>bot;

        num=a+b;
        cnt=0;

        while(num>=bot)
        {
            cnt=cnt+num/bot;
            num=(num/bot)+num%bot;
        }

        cout<<cnt<<endl;
    }

    return 0;
}

