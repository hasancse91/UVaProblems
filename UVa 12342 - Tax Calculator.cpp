#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int tCase,t,i;
    long long int tk,tax;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>tk;

        if(tk<=180000)
        tax=0;
        else if(tk>180000 && tk<=480000)//10% tax
        {
            tk=tk-180000;
            tax=ceil(tk*.1);

            if(tax<2000)
            tax=2000;
        }
        else if(tk>480000 && tk<=880000)//15% tax
        {
            tk=tk-480000;
            tax=30000+ceil(tk*0.15);
        }
        else if(tk>880000 && tk<=1180000)//20%
        {
            tk=tk-880000;
            tax=30000+60000+ceil(tk*.2);
        }
        else//-------------------------------25%
        {
            tk=tk-1180000;
            tax=30000+60000+60000+ceil(tk*.25);
        }

        cout<<"Case "<<i<<": "<<tax<<endl;

    }





    return 0;
}
