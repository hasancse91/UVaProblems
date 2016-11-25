#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    int a[27],b[27],i,j,cnt;
    string str1,str2;

    while(getline(cin,str1) && getline(cin,str2))
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));


        for(i=0; i<str1.size(); i++)
            a[str1.at(i)-'a'+1]++;
        for(i=0; i<str2.size(); i++)
            b[str2.at(i)-'a'+1]++;



        for(i=1; i<=26; i++)
        {
            if(a[i]!=0 && b[i]!=0)
            {
                if(a[i]<b[i])
                cnt=a[i];
                else
                cnt=b[i];

                while(cnt--)
                cout<<(char)(i+96);
            }

        }
        cout<<endl;

        str1="";
        str2="";

    }


    return 0;
}

