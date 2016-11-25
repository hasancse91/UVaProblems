#include<iostream>

using namespace std;

int main()
{
    int i,j,cnt,len;
    string a,b;

    while(cin>>a>>b)
    {
        len=a.length();
        int lenb=b.length();
        cnt=0,j=0;

        if(len<=lenb)
        {
            for(i=0; a[i]; i++)
            {
                for(; b[j]; j++)
                {
                    if(a[i]==b[j])
                    {
                        cnt++;
                        j++;
                        break;
                    }
                }
            }

            if(cnt==len)
            cout<<"Yes\n";
            else
            cout<<"No\n";
        }
        else
        cout<<"No\n";

    }


    return 0;
}
