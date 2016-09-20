#include<bits/stdc++.h>
#define pi acos(-1)


using namespace std;

int main()
{
    double f,res;

    while(scanf("%lf",&f)==1)
    {
        res = (sin(pi*108/180) / sin(pi*63/180)) * f;

        printf("%.10lf\n",res);
    }


    return 0;
}
