#include<bits/stdc++.h>

using namespace std;

vector<int> myVector[1000001];

int main()
{
    int n,m,k,v,value;

    while(scanf("%d %d", &n, &m)==2)
    {
        for(int i =0; i<1000001; i++)
            myVector[i].clear();

        for(int i = 0; i<n; i++)
        {
            scanf("%d", &value);
            myVector[value].push_back(i+1);
        }

        for(int i = 0; i<m; i++)
        {
            scanf("%d %d", &k, &v);

            if(myVector[v].size() < k)
                printf("0\n");
            else
                printf("%d\n", myVector[v][k-1]);
        }

    }

    return 0;
}
