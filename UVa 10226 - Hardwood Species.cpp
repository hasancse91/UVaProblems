#include<iostream>
#include<cmath>
#include<string>
#include<cstdio>
#include<map>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int tc=0,nc,i,k,l,m,n;
    string ss;
    double j;
    char s[100000];
    int count=0;
    bool f=false;

    cin>>nc;
    getchar();

    while(nc--)
    {
        if(tc!=0)
        cout<<endl;
        tc++;
        //gets(s);

        count=0;
        map<string,int>mp;
        map<string,int>::iterator it;

        if(!f)
        gets(s);
        f=true;

        while(gets(s))
        {

            if(strlen(s)==0)
            break;

            count++;
            mp[s]++;

            //count++;
        }
        //cout<<count<<endl;
        for(it=mp.begin();it!=mp.end();it++)
        {
            //cout<<(*it).second;
            j=((*it).second*100)/(double)count;
            cout<<(*it).first;
            printf(" %.4lf\n",j);
        }

        ss.clear();
        mp.clear();
        count=0;
    }


    return 0;
}

