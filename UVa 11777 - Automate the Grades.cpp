#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    int i,j,k,l,tCase,in[10],pro[5];

    scanf("%d",&tCase);

    for(int x=1; x<=tCase; x++)
    {
        for(i=0; i<4; i++)
    scanf("%d",&in[i]);

    for(i=0; i<3; i++)
    scanf("%d",&pro[i]);

    sort(pro,pro+3);

    int ct=(pro[1]+pro[2])/2;

    int res=in[0]+in[1]+in[2]+in[3]+ct;


    if(res>=90)
    printf("Case %d: A\n",x);
    else if(res>=80 && res<90)
    printf("Case %d: B\n",x);
    else if(res>=70 && res<80)
    printf("Case %d: C\n",x);
    else if(res>= 60 && res<70)
    printf("Case %d: D\n",x);
    else
    printf("Case %d: F\n",x);

    }


    return 0;
}
