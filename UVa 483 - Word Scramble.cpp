#include<stdio.h>

int i,add=0;
char str[10000],temp[1000];

void rev()
{
    int x,y,len,j;
    char val;

    for(x=0; temp[x]; x++);
    len=x;

    for(x=0,y=len-1; x<len/2 ; x++,y--)
    {
        val=temp[x];
        temp[x]=temp[y];
        temp[y]=val;
    }
    temp[len]=NULL;

    for(int z=0; temp[z]; z++)
    printf("%c",temp[z]);


    for(j=0; j<1000; j++)
            temp[j]=NULL;
            add=0;

}

void word()
{


    for(i=0; ;i++)
    {
        if((str[i]!=' ') && (str[i]!=NULL))
        temp[add++]=str[i];



        else if(str[i]==' ')
        {
            temp[add++]=NULL;
            rev();
            printf(" ");

        }
        else if(str[i]==NULL)
        {
            temp[add++]=NULL;
            rev();
            puts("");
            break;
        }

    }



}



int main()
{



    while(gets(str)!=NULL)
  {
      word();

  }


    return 0;
}

