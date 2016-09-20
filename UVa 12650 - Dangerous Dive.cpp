#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n,r,id[10010],val,i;

    while(cin>>n>>r)
    {
        memset(id,0,sizeof(id));

        for(i=1; i<=r; i++)
        {
            cin>>val;
            id[val]=1;
        }

        for(i=1; i<=n; i++)
        {
            if(id[i]==0)
                cout<<i<<" ";

        }

        if(n==r)
        cout<<"*";

        cout<<endl;
    }

    return 0;
}
