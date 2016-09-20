#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int dig_sum(int n)
{
    int sum=0;

    while(n)
    {
        sum=sum+(n%10);
        n/=10;
    }

    return sum;
}

int main()
{
    int t,tCase,sum1=0,sum2=0,i,val;
    string str1,str;
    char ch;

    cin>>tCase;
    getchar();

    for(t=1; t<=tCase; t++)
    {
        getline(cin,str1);

        for(i=0; i<str1.size(); i++)
        {

            if(str1.at(i)!=32)
            str+=str1.at(i);
        }

        for(i=0; i<str.size(); i++)
        {
            if(i%2==0)
            {
                val=str.at(i)-48;
                sum1=sum1+dig_sum(val*2);
            }
            else
            sum2=sum2+str.at(i)-48;
        }

        if((sum1+sum2)%10==0)
        cout<<"Valid"<<endl;
        else
        cout<<"Invalid"<<endl;

        sum1=sum2=0;

        str1="";
        str="";


    }


    return 0;
}
