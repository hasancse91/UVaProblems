#include<iostream>
#include<string>


using namespace std;
string num;

int leapyear(int mod)
{
    int j,val;

    val=0;
    for(j=0; j<num.size(); )
    {
        while(val<mod)
        {
            val=val*10+num[j]-'0';
            j++;

            if(j==num.size())
            break;


        }
        val=val%mod;
    }

    //cout<<"val: "<<val<<endl;

    return val;
}






int main()
{
    int tCase=1,year;


    while(cin>>num)
    {
        if(tCase>1)
        cout<<endl;

        if((!(leapyear(4)) && leapyear(100)) || (!leapyear(400)))
        {
            cout<<"This is leap year."<<endl;
            if(!leapyear(15))
            cout<<"This is huluculu festival year."<<endl;
            if(!leapyear(55))
            cout<<"This is bulukulu festival year."<<endl;
        }
        else if(!leapyear(15))
        cout<<"This is huluculu festival year."<<endl;
        else
        cout<<"This is an ordinary year."<<endl;

        tCase++;

    }


    return 0;
}
