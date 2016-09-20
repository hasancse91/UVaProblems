#include<iostream>
#include<cstdio>
#include<cmath>




using namespace std;

int main()
{
    int a;
    double time_h,time_m,h,m,total,degree;
    char ch;

    while(cin>>time_h>>ch>>time_m && (time_h || time_m))
    {
        h=time_h*30+time_m*0.5;
        time_m=time_m*6;
        degree=fabs(h-time_m);

        if(degree>180)
            degree=360-degree;

        printf("%.3lf\n",degree);
    }


    return 0;
}
