#include<cstdio>
#include<iostream>

using namespace std;

string strMul(string a, string b)
{
    string tmp;
    int i,blen,j,alen,temp,carry,strt;

    alen=a.length();
    blen=b.length();

    for(i=blen-1; i>=0; i--)
    {
        carry=0;
        strt=blen-i-1;
        for(j=alen-1; j>=0; j--)
        {
            temp=(b[i]-'0')*(a[j]-'0') + carry;
            tmp[strt]=(temp%10)+'0';
            carry=temp/10;

            cout<<"Ho "<<tmp<<endl;
            strt++;
        }
        //if(carry>0)
        //tmp+=(carry+'0');
        cout<<"->"<<tmp<<endl;
    }

    return tmp;


}

int main()
{
    int i,point,frac,num,flag,po;
    string str,wholeNum,tmp,p;

    str=strMul("345","123");

    cout<<"HI HI: "<<str;
/*
    while(cin>>str>>p)
    {
        num=0;
        flag=1;
        frac=0;
        wholeNum="";
        po=0;

        for(i=0; str[i]; i++)
        {
            if(flag==0)
            frac++;

            if(str[i]!='.')
            {
                wholeNum+=str[i];
            }
            else
            flag=0;

        }

        for(i=0; p[i]; i++)
        po=po*10 + p[i]-'0';


        for(i=1; i<=po; i++)
        {
            wholeNum=strMul(wholeNum,p);
        }




    }
*/
    return 0;
}
