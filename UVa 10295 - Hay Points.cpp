#include<iostream>
#include<cstdio>
#include<sstream>
#include<string>
#include<map>

using namespace std;


int main()
{
    int i,j,k,val[1200],m,n,inc,value,sum;
    char ch;
    string str,temp,word;
    map<string,int> arr;
    map<string,int>::iterator it;

    cin>>m>>n;
    getchar();
    sum=0;

    for(i=1; i<=m; i++)
    {
        cin>>temp>>value;
        arr[temp]=value;
    }



    for(i=1; i<=n; i++)
    {
        while(true)
        {
            getline(cin,str);

        if(str[0]=='.')
        break;

        stringstream ss;

        ss<<str; //jei puro line ta nilam setake akta stringstring variable e inptu hisebe dite hobe

            while(ss>>word) //erpor sei ss protibar akta akta word kore onno akta string e transfer korbe ss>>word die
            {               //amra loop chalacci jate kore shob gulo word paoa jai
                if(arr[word]!=0)
                sum=sum+(*it).second;
            }

        cout<<sum<<endl;
        sum=0;
        }

    }




    return 0;
}
