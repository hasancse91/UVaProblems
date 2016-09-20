#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,tCase,p,arr[3700],i,j,val,tmp,cnt;

    scanf("%d",&tCase);

    while(tCase--)
    {
        scanf("%d %d",&n,&p);
        memset(arr,0,sizeof(arr));
        cnt=0;

        for(i=1; i<=p; i++)
        {
            scanf("%d",&val);

            for(j=val; j<=n; j+=val)
            arr[j] = 1;
        }
        tmp=6;
        for(i=1; i<=n; i++)
        {
            if(i==tmp)
            {
                i++;
                tmp+=7;
            }
            else if(arr[i]==1)
            {
                cnt++;
                //cout<<i<<endl;

            }

        }

        printf("%d\n",cnt);
    }

    return 0;
}
