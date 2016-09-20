#include<iostream>

using namespace std;

int main()
{
    long long a,b,x,y;
    int i,cnt,tCase=0;

    while(cin>>a>>b)
    {
        x=a;
        y=b;
        tCase++;
        cnt=0;
        if(a==-1 && b==-1)
        break;

        while(true)
        {
            cnt++;
            if(a==1)
            break;

            if(a&1)
            a=a*3+1;
            else
            a=a/2;

            if(a>b)
            break;

        }

        cout<<"Case "<<tCase<<": A = "<<x<<", limit = "<<y<<", number of terms = "<<cnt<<endl;
    }


    return 0;
}
