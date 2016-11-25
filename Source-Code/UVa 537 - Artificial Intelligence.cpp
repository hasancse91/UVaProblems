#include<iostream>
#include<cctype>
#include<string>
#include<cstdio>

using namespace std;

double convert(string n)
{
    double res=0,res3=0;
    int i=0,j,k=0,res2=0;

    while(isdigit(n[i]))
    {
        res=res*10+(n[i]-48);
        i++;
    }

    if(n.size()>i)
    {
        i++;
        while(isdigit(n[i]))
        {
            res2=res2*10+(n[i]-48);
            i++;
            k++;
        }
        res3=res2;
        for(i=1; i<=k; i++)
        {
            res3=res3/10.0;
        }
    }

    //cout<<"RES "<<res3<<endl;

    return res+res3;
}

double adj(char ch)
{
    if ( ch == 'm' ) return 0.001;
    if ( ch == 'k' ) return 1000;
    if ( ch == 'M' ) return 1000000;

    return 1;
}

int main()
{
    int i,j,k,tCase,ne;
    double U,P,I;
    char ch;
    string str,num;

    //cout<<convert("2.5");
//A light-bulb yields P=100.123W and the voltage is U=220V. Compute the current, please.
    cin>>tCase;
    cin>>ch;
    for(int t=1; t<=tCase; t++)
    {
        getline(cin,str);
        ne=0;
        num="";
        U=0,P=0,I=0;

        for(i=0; str[i]; )
        {
            if(str[i]=='=')
            {
                ne++;

                if(str[i-1]=='P')
                {
                    num="";
                    i++;
                    while(!(isalpha(str[i])))
                    {
                        num+=str[i];
                        i++;
                    }

                    P=convert(num);
                    P=P*adj(str[i]);
                    //cout<<"P: "<<P;



                }
                else if(str[i-1]=='U')
                {
                    num="";
                    i++;
                    while(!(isalpha(str[i])))
                    {
                        num+=str[i];
                        i++;
                    }
                    U=convert(num);
                    U=U*adj(str[i]);
                    //cout<<"U: "<<U;
                }
                else
                {
                    num="";
                    i++;
                    while(!(isalpha(str[i])))
                    {
                        num+=str[i];
                        i++;
                    }
                    I=convert(num);
                    I=I*adj(str[i]);
                    //cout<<"NUM "<<num<<"#"<<endl;
                    //cout<<"I: "<<I<<"#";
                }
            }
            else
            i++;

            if(ne==2)
            break;
        }

        cout<<"Problem #"<<t<<endl;
        if(P==0)
        {
            P=U*I;

            printf("P=%.2lfW\n",P);
        }
        else if(U==0)
        {
            U=P/I;

            printf("U=%.2lfV\n",U);
        }
        else
        {
            I=P/U;

            printf("I=%.2lfA\n",I);
        }

        cout<<endl;
    }



    return 0;
}

