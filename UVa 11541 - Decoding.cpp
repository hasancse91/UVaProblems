#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    int i,j,k,tCase,num;
    char ch;


    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>str;

        cout<<"Case "<<i<<": ";

        for(j=0; j<str.size(); )
        {
            if(str[j]>='A' && str[j]<='Z')
            {
                ch=str[j];
                j++;
            }
            else
            {
                num=0;
                while(str[j]>='0' && str[j]<='9')
                {
                    num=num*10+(str[j]-'0');
                    j++;

                    //cout<<num<<endl;
                }

                for(k=1; k<=num; k++)
                cout<<ch;

            }


        }
        cout<<endl;

    }




    return 0;
}
