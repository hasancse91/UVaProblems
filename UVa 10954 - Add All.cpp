#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,arr[5010];
    long long imd,sum;

    while(scanf("%d",&n)==1, n)
    {
        sum=0;
        for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

        sort(arr,arr+n);

        imd = arr[0] + arr[1];
        sum = 0;

        for(i=0; i<n-1; i++)
        {
            sort(arr+i,arr+n);
            imd = arr[i] + arr[i+1];

            arr[i+1] = imd;
            sum = sum + imd;

        }

        printf("%lld\n",sum);
    }



    return 0;
}
