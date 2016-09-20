#include<iostream>
#include<cstdio>
#include<cmath>
#define pi 2*acos(0.0)

using namespace std;

int main()
{
    int tCase,i,flag;
    char str[200];
    double t,r1,r2,r,res,temp1,temp2;

    scanf("%d",&tCase);

    getchar();

    while(tCase--)
    {
        gets(str);
        temp1=0;
        temp2=0;
        flag=1;

        //puts(str);

        for(i=0; str[i]; i++)
        {
            if(str[i]==' ')
            flag=0;
            else
            {
                if(flag==1)
                temp1=temp1*10 + str[i]-'0';
                else
                temp2=temp2*10 + str[i]-'0';
            }


        }

        if(temp1>0 && temp2>0)
        {
            r1=temp1;
            r2=temp2;

            res=(pi*(r1+r2)*(r1+r2)) - (pi*r1*r1 + pi*r2*r2);

            //cout<<r1<<" "<<r2<<endl;

        }
        else
        {
            t=temp1;
            //r=t/2.0;

            res = (pi*(t/2.0)*(t/2.0)) - (2*pi*(t/4.0)*(t/4.0));

            //cout<<t<<endl;
        }

        printf("%.4lf\n",res);

    }



    return 0;
}

