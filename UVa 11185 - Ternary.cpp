#include<iostream>
#include<cstring>

using namespace std;

void ternary(int num)
{
    string str;
    int i=1,len;

    while(num!=0)
    {
        str+=(num%3)+48;
        num/=3;
        i++;
    }
    len=i-1;

    for(i=len-1; i>=0; i--)
    cout<<str.at(i);
    cout<<endl;

    str="";

}

int main()
{
    int num,i,j;

    while(cin>>num && num>=0)
    {
        if(num==0)
        cout<<num<<endl;
        else
        ternary(num);
    }

    return 0;
}
