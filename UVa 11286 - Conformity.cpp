#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, var;
    vector <int> myVector;

    while(scanf("%d",&n) && n)
    {
        map <vector <int>, int> myMap;
        while(n--)
        {
            for(int j=0; j<5; j++)
            {
                scanf("%d",&var);
                myVector.push_back(var);
            }

            sort(myVector.begin(), myVector.end());

            myMap[myVector]++;
            myVector.clear();
        }


        int res = myMap.size();
        printf("%d\n",res);
        myMap.clear();

    }



    return 0;
}
