#include<iostream>

using namespace std;

int main()
{
    int i,tCase,cnt,result;
    char str[90];

    cin>>tCase;

    while(tCase--)
    {
        cin>>str;
        cnt=0,result=0;

        for(i=0; str[i]; i++)
        {
            if(str[i]=='O')
            {
                cnt++;
                result+=cnt;
            }
            else
                cnt=0;
        }

        cout<<result<<endl;
    }

    return 0;
}
