#include<iostream>
#include<string>
#include<ctype.h>


using namespace std;

int main()
{
    long long int res,a,b;
    int i;
    bool flag;
    string num,sign,div;


    while(cin>>num>>sign>>b)
    {
        if(sign.at(0)=='%')
        {
            a=0;
            for(i=0; i<num.size(); i++)
            {
                a=(a*10)+num.at(i)-'0';
                a=a%b;
            }

            cout<<a<<endl;
        }
        else
        {
            a=0;
            flag=false;
            int cnt=0;
            for(i=0; i<num.size(); )
            {

                while(a<b)
                {
                    a=a*10+num.at(i)-'0';

                    if(flag && cnt>0)
                    cout<<0;

                    i++;
                    cnt++;
                    if(i==num.size())
                    break;
                }

                cout<<a/b;
                a=a%b;
                cnt=0;

                flag=true;

                //cout<<res;
            }
            cout<<endl;

        }


    }


    return 0;
}
