#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

class slogun
{
    private:
    string a,b;

    public:
    void getdata()
    {
        getline(cin,a);
        getline(cin,b);
    }

    string ret_a()
    {
        return a;
    }
    string ret_b()
    {
        return b;
    }

};


int main()
{
    int n,q,i,j;
    string com;
    slogun arr[25];

    cin>>n;

    getchar();

    for(i=0; i<n; i++)
    {
        arr[i].getdata();
    }



    cin>>q;

    getchar();

    for(i=0; i<q; i++)
    {
        getline(cin,com);

        for(j=0; j<n; j++)
        {
            if(arr[j].ret_a()==com)
            {
                cout<<arr[j].ret_b()<<endl;
                break;
            }

        }

    }



    return 0;
}
