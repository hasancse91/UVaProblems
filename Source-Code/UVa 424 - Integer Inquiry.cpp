#include<iostream>
#include<string>

using namespace std;

string add(string a, string b)
{
    string result,tmp;
    int i,j,dif,carry=0,alen,blen,range,val;

    //cout<<a<<"  "<<b<<endl;

    alen=a.size();
    blen=b.size();

    if(alen>blen)
    {
        dif=alen-blen;
        tmp="";

        for(i=0; i<dif; i++)
        tmp=tmp+"0";

        b=tmp+b;
        tmp="";
    }
    else if(blen>alen)
    {
        dif=blen-alen;
        tmp="";

        for(i=0; i<dif; i++)
        tmp=tmp+"0";

        a=tmp+a;
        tmp="";
    }

    //cout<<a<<"  "<<b<<endl;

    range=a.size();

    result=a;

    for(i=range-1; i>=0; i--)
    {
        val=a[i]+b[i]+carry-2*'0';

        if(val>9)
        {
            carry=1;
            val=val%10;
        }
        else
            carry=0;


        result[i]=val+'0';
        //cout<<result[i];
    }

    if(carry>0)
    result="1"+result;


    return result;

}

int main()
{
    int i,j;
    string num,res="0";

    while(cin>>num)
    {
        if(num=="0")
            break;

        res=add(res,num);
        num="";
    }

    cout<<res<<endl;



    return 0;
}
