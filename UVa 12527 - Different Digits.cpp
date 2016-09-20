#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int i,j,k,tCase,n,m,cnt,arr[10],add,mod,flag;

    while(cin>>n>>m)
    {
        cnt=0;


        for(i=n; i<=m; i++)
        {
            j=i;
            memset(arr,0,sizeof(arr));
            add=0;
            flag=1;

            while(j!=0)
            {
                mod=j%10;
                j/=10;
                arr[mod]++;
            }

            for(j=0; j<10; j++)
            {
                if(arr[j]>1)
                {
                    flag=0;
                    break;
                }
            }

            if(flag==1)
            cnt++;
        }
        cout<<cnt<<endl;
    }



    return 0;
}


