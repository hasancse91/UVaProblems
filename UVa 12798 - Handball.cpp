#include<iostream>

using namespace std;

int main()
{
    int i,j,n,m,cnt,res,goal;

    while(cin>>n>>m)
    {
        res=0;
        for(i=1; i<=n; i++)
        {
            cnt=0;
            for(j=1; j<=m; j++)
            {
                cin>>goal;
                if(goal>0)
                cnt++;
            }

            if(cnt==m)
            res++;
        }



        cout<<res<<endl;
    }


    return 0;
}
