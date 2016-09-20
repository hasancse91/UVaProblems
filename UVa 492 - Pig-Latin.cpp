#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    int i,j,k,len;
    string str;
    char ch;

    while(getline(cin,str))
    {
        len=str.size();
        for(i=0; i<len; )
        {
            //If vowel
            if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') || (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'))
            {
                for(; i<len; i++)
                {
                    if(isalpha(str[i]))
                    cout<<str[i];
                    else
                    {
                        cout<<"ay";
                        while(!isalpha(str[i]) && i!=len)
                        {
                            cout<<str[i];
                            i++;
                        }
                        break;
                    }

                }

            }
            else //If consonant
            {
                ch=str[i];
                i++;
                for(; i<len; i++)
                {
                    if(isalpha(str[i]))
                    cout<<str[i];
                    else
                    {
                        cout<<ch;
                        cout<<"ay";
                        while(!isalpha(str[i]) && i!=len)
                        {
                            cout<<str[i];
                            i++;
                        }
                        break;
                    }

                }


            }


        }

        if(isalpha(str[len-1]))
        {
            cout<<"ay\n";
        }
        else
        cout<<endl;

    }


    return 0;
}
