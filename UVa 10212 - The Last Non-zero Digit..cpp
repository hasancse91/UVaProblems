#include<cstdio>
#include<iostream>
using namespace std;

#define LL long long int

int main()
{
    LL a,b;
    while(cin>>a>>b)
    {
        if(b==0) cout<<1<<endl;
        else
        {
            LL ans=1;
            LL c=a-b+1;
            for(LL i=a;i>=c;i--)
            {
                ans*=i;
                while(ans%10==0)
                    ans/=10;

                ans=ans%1000000000;

            }
            cout<<ans%10<<endl;
        }
    }
    return 0;
}

