#include<iostream>
#include<cstdio>

using namespace std;

int les(int val)
{
    int res;
    res=val+11;

    return res;
}

int larg(int val)
{
    int res;
    res=val-10;

    return res;
}

int main()
{
    int n,temp;

    while(cin>>n && n)
    {
        if(n>=101)
        {
            temp=larg(n);
            cout<<"f91("<<n<<") = "<<temp<<endl;
        }
        else
        {
            temp=les(n);

            if(temp>=101)
            {
                temp=larg(temp);
                cout<<"f91("<<n<<") = "<<temp<<endl;
            }
            else
            {
                temp=les(temp);
                cout<<"f91("<<n<<") = "<<temp<<endl;
            }
        }


    }


    return 0;
}
