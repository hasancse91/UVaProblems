#include<iostream>

using namespace std;

int main()
{
    int row,clmn,n,res;

    cin>>n;

    while(n--)
    {
        cin>>row>>clmn;

        res=(row/3)*(clmn/3);

        cout<<res<<endl;
    }


    return 0;
}
