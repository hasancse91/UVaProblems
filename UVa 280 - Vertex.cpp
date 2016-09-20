#include<bits/stdc++.h>
#define MAX 10000

using namespace std;
vector<int>edges[MAX];
vector<int>cost[MAX];

int main()
{
    int node,i,start,to,cnt;
    bool arr[10100][10100];

    scanf("%d",&node);

    while(scanf("%d",&start) && start)
    {
        memset(arr,false,sizeof(arr));
        cnt=0;
        while(scanf("%d",&to) && to)
        {
            //edges[start].push_back(to);
            arr[start][to]=true;
        }
    }

    return 0;
}
