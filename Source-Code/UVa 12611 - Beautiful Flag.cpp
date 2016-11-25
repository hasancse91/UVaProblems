#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,t,tCase,len,wid,r;

    scanf("%d",&tCase);

    for(t=1; t<=tCase; t++)
    {
        scanf("%d",&r);

        len=5*r;
        wid= (len*3)/5;

        x1=-(len*45)/100;
        y1=wid/2;
        y2=-y1;
        y3=-y1;
        y4=y1;
        x2=x1;
        x3=len+x1;
        x4=x3;

        printf("Case %d:\n",t);
        printf("%d %d\n%d %d\n%d %d\n%d %d\n",x1,y1,x4,y4,x3,y3,x2,y2);

    }


    return 0;
}
