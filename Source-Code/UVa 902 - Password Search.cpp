#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    int i,j,k,n,max;
    string text,temp;
    map<string,int> arr;
    map<string,int>::iterator it;


    while(cin>>n)
    {
        cin>>text;

        for(i=0; i<text.size()-n; i++)
        {
            temp="";

            for(j=0; j<n; j++)
            {
                temp+=text.at(i+j);
            }
            arr[temp]++;


        }

        max=0;
        for(it=arr.begin();it!=arr.end();it++)
        {
            if(max<(*it).second)
            {
                max=(*it).second;
                temp=(*it).first;
            }
        }

        cout<<temp<<endl;

        arr.clear();



    }





    return 0;
}
