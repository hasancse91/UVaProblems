#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tCase;
    char str[150];

    scanf("%d", &tCase);
    getchar();

    while(tCase--)
    {
        stack<char> myStack;
        gets(str);

        for(int i=0; str[i]; i++)
        {
            if(!myStack.empty() && str[i]==')' && myStack.top()=='(')
                myStack.pop();
            else if(!myStack.empty() && str[i]==']' && myStack.top()=='[')
                myStack.pop();
            else
                myStack.push(str[i]);

        }

        if(myStack.empty())
            printf("Yes\n");
        else
            printf("No\n");

    }

    return 0;
}
