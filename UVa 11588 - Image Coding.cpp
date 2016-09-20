#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int t,tCase,row,col,M,N,i,j,res,arr[30],maxi;
    char ch;


    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>row>>col>>M>>N;

        memset(arr,0,sizeof(arr));
        maxi=0;

        for(i=1; i<=row; i++)
        {
            for(j=1; j<=col; j++)
            {
                cin>>ch;
                arr[ch-64]++;

                if(arr[ch-64]>maxi)
                maxi=arr[ch-64];
            }
        }

        res=0;
        for(i=1; i<=26; i++)
        {
            if(arr[i]==maxi)
            res=res+arr[i]*M;
            else
            res+=arr[i]*N;
        }

        cout<<"Case "<<t<<": "<<res<<endl;
    }

    return 0;
}

