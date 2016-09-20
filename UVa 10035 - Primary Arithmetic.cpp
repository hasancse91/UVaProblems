#include<iostream>

using namespace std;

int main()
{
    unsigned long int a,b,cnt,mod,temp,fst,sec,carry;

    while(cin>>a>>b && (a || b))
    {
        carry=0;
        cnt=0;
        while(a || b)
        {
            fst=a%10;
            a/=10;

            sec=b%10;
            b/=10;

            temp=fst+sec+carry;

            if(temp>9)
            {
                cnt++;
                carry=1;
            }
            else
            carry=0;

        }

        if(cnt==0)
        cout<<"No carry operation."<<endl;
        else if(cnt==1)
        cout<<cnt<<" carry operation."<<endl;
        else
        cout<<cnt<<" carry operations."<<endl;



    }


    return 0;
}
