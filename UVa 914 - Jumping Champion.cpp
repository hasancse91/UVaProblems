#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

#define TOT 1000010

int status[TOT],prm[999983],arr[TOT],check[TOT];

void prime()
{
    int i,j,k,range,add=1;

    range=sqrt(TOT);

    for(i=2; i<=range; i++)
    {
        if(status[i]==0)
        {
            for(j=i+i; j<TOT; j=j+i)
            {
                status[j]=1;
            }
        }

    }

   // cout<<prm[]<<endl;

    for(i=2; i<TOT; i++)
    {
        if(status[i]==0)
        prm[add++]=i;
    }
}

int main()
{
    int i,j,n,cnt,tCase,LL,UU,a,max,pos,add,b;

    prime();

    cin>>tCase;

    while(tCase--)
    {
        cin>>LL>>UU;
        memset(arr,0,TOT);
        max=0;
        pos=0;
        cnt=0;

        for(i=1; ; i++)
        {
            if(prm[i]>=LL)
            {
                a=i;
                break;
            }

        }

        for(i=a; ; i++)
        {
            if(prm[i]>UU)
            {
                b=i-1;
                break;
            }
        }

        for(i=a; i<b; i++)
        {
            int val=prm[i+1]-prm[i];
            arr[val]++;

            if(arr[val]>max)
            {
                max=arr[val];
                pos=val;
            }
            //cout<<prm[i]<<"  ";

        }
        //cout<<"a "<<a<<" i "<<i<<endl;

        for(j=1; j<=b; j++)
        {
            if(arr[j]==max)
            cnt++;
            //cout<<arr[j]<<" *";
        }

        //cout<<endl<<"CNT  "<<cnt<<endl;

        //cout<<pos<<endl;

        //for(i=1; i<=15; i++)
        //cout<<arr[i]<<" ";

        if((b-a)>=1 && cnt<2)
        cout<<"The jumping champion is "<<pos<<endl;
        else
        cout<<"No jumping champion\n";


    }


    return 0;
}



