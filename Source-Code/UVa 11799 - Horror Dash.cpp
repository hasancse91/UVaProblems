#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int i,n,a[100010],tCase,p;

    scanf("%d",&tCase);

    for(p=1; p<=tCase; p++)
    {
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);

        printf("Case %d: %d\n",p,a[n-1]);

    }




    return 0;
}
