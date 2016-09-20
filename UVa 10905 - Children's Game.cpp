#include<iostream>
#include<algorithm>

using namespace std;

bool comp(string a, string b)
{
    string c,d;

    c=a+b;
    d=b+a;

    if(c>d)
    return true;
    else
    return false;

}

int main()
{
    int arr[55],n,i;
    string str[60];

    //n=comp(123,124);

    while(cin>>n && n)
    {
        for(i=0; i<n; i++)
        cin>>str[i];

        sort(str,str+n,comp);

        for(i=0; i<n; i++)
        cout<<str[i];

        cout<<endl;
    }


    return 0;
}
