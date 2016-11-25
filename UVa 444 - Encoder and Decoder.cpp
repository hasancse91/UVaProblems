#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i,j,k,ascii,len,val,range;
    string str;

    while(getline(cin,str))
    {
        len=str.size();

        if(!(str[0]>='0' && str[0]<='9'))
        {
            for(i=len-1; i>=0; i--)
            {
                val=str[i];
                while(val)
                {
                    cout<<val%10;
                    val/=10;
                }
            }
        }
        else
        {

            for(i=len-1; i>=0; )
            {
                val=0;
                if(str[i]=='1')
                range=3;
                else
                range=2;

                for(j=1; j<=range; j++)
                {
                    val=val*10+str[i]-'0';
                    i--;
                }
                cout<<(char)val;
            }
        }

        cout<<endl;
    }


    return 0;
}
