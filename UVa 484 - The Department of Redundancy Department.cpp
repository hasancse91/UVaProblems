#include<iostream>
#include<string>
#include<map>

using namespace std;

int fr[10000000];

int main()
{
    int i,j,num,add=0;
    map<int,int>val;
    map<int,int>::iterator it;

    while(cin>>num)
    {
        if(val[num]==0)
        fr[add++]=num;

        val[num]++;

    }


    for(i=0; i<add; i++)
        {
            int tmp=fr[i];
            cout<<tmp<<" "<<val[tmp]<<endl;
        }


    return 0;
}
