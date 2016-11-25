#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

double findGen(double n)
{
    double i,p=1,res=1,tmp;

    for(i=0; ; i++)
    {
        if(n>=pow(2,i) && n<pow(2,i+1))
        {
            res=i+1;
            break;
        }
    }

    return res;

}

int main()
{
    double tCase,total_gen,childgenA,childgenB,a,b,minus,res;

    scanf("%lf",&tCase);

    while(tCase--)
    {
        scanf("%lf %lf %lf",&total_gen,&a,&b);

        childgenA = findGen(a);
        childgenB = findGen(b);

        if(childgenA<childgenB)
        {
            minus = total_gen - childgenB + 1;
        }
        else
        {
            minus = total_gen - childgenA + 1;
        }


        res = pow(2,total_gen) - pow(2,minus) + 1;

        printf("%.0lf\n",res);

    }



    return 0;
}

