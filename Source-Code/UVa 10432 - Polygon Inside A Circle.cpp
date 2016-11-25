#include<iostream>
#include<cmath>
#include<cstdio>
#define pi 2*acos(0.0)


using namespace std;

class area
{
    int r,n;
    double res;

    public:
    void func()
    {
        double b,C,B,c,p;
        while(cin>>r>>n)
        {
            b=r;
            C=360/(double)n;
            B=(180-C)/2.0;
            c=(b*sin(C))/(double)sin(B);
            p=sqrt((b*b)-((c/2.0)*(c/2.0)));

            res=(0.5*c*p)*n;

            printf("%.3lf\n",res);

        }


    }
};

int main()
{
    area data;

    data.func();


    return 0;
}
