#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>

using namespace std;

struct data
{
    int pos,value;
};

bool comp(data a, data b)
{
    if(a.value==b.value)
    return a.pos<b.pos;
    else
    return a.value<b.value;
}

int main()
{
    int tCase,p,cnt,i,temp;
    char str[5000];
    stringstream ss;
    string tmp;
    data arr[1010];

    scanf("%d",&tCase);

    while(tCase--)
    {
        scanf("%d",&p);
        getchar();

        for(i=0; i<p; i++)
        {
            gets(str);
            cnt=0;

            ss<<str;

            while(ss>>tmp)
            {
                cnt++;
            }

            arr[i].pos=i;
            arr[i].value=cnt;
            ss.clear();
        }

        sort(arr,arr+p,comp);

        temp=arr[0].value;

        for(i=0; i<p && arr[i].value==temp; i++)
        {
            if(i>0)
            printf(" ");
            printf("%d",arr[i].pos+1);
        }
        puts("");

    }

    return 0;
}
/*
2
3
2
1 3
2

4
2 2 4
3
1
2
*/
