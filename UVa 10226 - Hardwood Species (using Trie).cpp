#include<bits/stdc++.h>

using namespace std;
int n;
struct node
{
    bool endMark;
    node *next[130];
    int counter;

    node()
    {
        endMark = false;
        counter = 0;
        for(int i=0; i<130; i++)
        {
            next[i] = NULL;
        }
    }
}*root;

void insert(char *str,int len)
{
    int i,id;
    node *curr=root;

    for(i=0; i<len; i++)
    {
        id = str[i];

        if(curr->next[id]==NULL)
            curr->next[id] = new node();
        curr=curr->next[id];
    }

    curr->endMark = true;
    curr->counter++;

}

void traverseTrie(node *head,string a)
{
	int   i;
	if(head->endMark)
	{
		cout<<a;
		printf(" %.4lf\n",(head->counter*100.0)/(double)n);
		//return;
	}
	for(i=0;i<130;i++)
	{
		if(head->next[i]!=NULL)
		{
			char ch=i;
			traverseTrie(head->next[i],a+ch);
		}
	}
}

int main()
{
    int tCase,res;
    char str[50];
    bool flag=false;

    cin>>tCase;
    getchar();

    while(tCase--)
    {
        if(flag)
        puts("");
        if(!flag)
            gets(str);
        flag = true;
        root=new node();
        n=0;

        while(gets(str))
        {
            if(strlen(str)==0)
            break;
            n++;
            insert(str,strlen(str));
        }
		string a="";
		traverseTrie(root,a);
    }
    return 0;
}
