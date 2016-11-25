#include<iostream>

using namespace std;

int main()
{
    int h1,m1,h2,m2,hour,min,time;

    while(cin>>h1>>m1>>h2>>m2 && (h1 || m1 || h2 || m2))
    {
        if(m2<m1)//minutes calculation
        {
            min=m2+60-m1;
            h1=h1+1;
        }
        else
        min=m2-m1;

        if(h2<h1)//hour calculation
        {
            hour=h2+24-h1;
        }
        else
        hour=h2-h1;

        time=hour*60+min;

        cout<<time<<endl;

    }


    return 0;
}
