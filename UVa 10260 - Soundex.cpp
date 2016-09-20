#include<bits/stdc++.h>

using namespace std;

int arr[200];

int main()
{
    int i,imd;
    string str;
    arr['B']=arr['F']=arr['P']=arr['V']=1;
    arr['C']=arr['G']=arr['J']=arr['K']=arr['Q']=arr['S']=arr['X']=arr['Z']=2;
    arr['D']=arr['T']=3;
    arr['L']=4;
    arr['M']=arr['N']=5;
    arr['R']=6;


    while(cin>>str)
    {
        imd=0;
        for(i=0; str[i]; i++)
        {
            if(arr[str[i]]>0)
            {
                if(arr[str[i]]!=imd)
                {
                    cout<<arr[str[i]];
                    imd=arr[str[i]];
                }
            }
            else
            imd=0;
        }
        puts("");
    }

    return 0;
}
