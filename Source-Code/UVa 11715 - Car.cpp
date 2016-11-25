#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int ins,tCase=1;
    double u,v,s,a,t;

    while(cin>>ins && ins)
    {
        //cin>>x>>y>>z;

        if(ins==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);

            s=(u+v)*t/2;
            a=(v-u)/t;

            printf("Case %d: %.3lf %.3lf\n",tCase,s,a);

        }
        else if(ins==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);

            t=(v-u)/a;
            s=(u+v)*t/2;

            printf("Case %d: %.3lf %.3lf\n",tCase,s,t);


        }
        else if(ins==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);

            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",tCase,v,t);

        }
        else
        {
            scanf("%lf%lf%lf",&v,&a,&s);

            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",tCase,u,t);

        }
        tCase++;
    }

    return 0;
}
