#include<iostream>
#include<cstdio>
#include<map>


using namespace std;

int par[30100],maxi;
map<int,int> mp;
map<int,int>::iterator it;

//assume that a=1,b=2,c=3,d=4,e=5

void makeset(int a, int b)
{
    if(par[a]==0)
	par[a]=a;
	if(par[b]==0)
	par[b]=b;
}

int find(int r)
{
	if(par[r]==r)
	return r;
	else
    return par[r]=find(par[r]);

}

void Union(int a,int b)
{
	int u=find(a);
	int v=find(b);

	//if(u!=v)
    par[u]=v;

    //mp[v]++;
    //if(mp[v]>maxi)
    //maxi=mp[v];

    //cout<<"Parent of "<<v<<" is: "<<par[u]<<endl;

}


int main()
{
    int n,m,a,b,i,tCase,t;


    scanf("%d",&tCase);

    while(tCase--)
    {
        scanf("%d %d",&n,&m);
        maxi=0;

        for(i=1; i<=n; i++)
        par[i]=i;

        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&a,&b);

            Union(a,b);

        }

        for(i=1;i<=n;i++)
        find(i);

        for(i=1; i<=n; i++)
        {
            t=par[i];
            mp[t]++;
            //cout<<mp[t]<<"\n";

            //cout<<t<<" ";

            if(mp[t]>maxi)
            maxi=mp[t];
        }
        //puts("");
/*
        for(it=mp.begin();it!=mp.end();it++)
        {
            cout<<(*it).first<<" "<<(*it).second<<endl;
        }
*/

        printf("%d\n",maxi);
        mp.clear();

    }



    return 0;
}

