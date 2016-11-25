#include<stdio.h>
#include<string.h>

char fibo[5010][5010]={"0","1","1"};

int pos=3;

int MAX(int m,int n)
{
        if(m>n)
                return m;
        return n;
}
void add(char *fir, char *sec)
{

        int i,hold,len_1,len_2,loop,len,j,k,l,x,p;

            int rem=0;
        char sum[5000];

        len_1=strlen(fir);
        len_2=strlen(sec);

        loop=MAX(len_1,len_2);
        for(i=0;i<loop;i++)
        {
                if(len_2<=0)
                        hold=rem+(fir[--len_1]-'0');
                else if(len_1<=0)
                        hold=rem+(sec[--len_2]-'0');
                else
                        hold=rem+(fir[--len_1]-'0')+(sec[--len_2]-'0');

                sum[i]=(hold%10)+'0';

                rem=hold/10;
        }
        while(rem>0)
        {
                sum[i++]=(rem%10)+'0';
                rem/=10;
        }
        sum[i]='\0';

        for(k=i-1,l=0; k>=0; k--,l++)
        {
            fibo[pos][l]=sum[k];
        }
        fibo[pos][l]=NULL;


pos++;
}

void fib()
{

    int i;
        for(i=3;i<=5000;i++)
                add(fibo[pos-2],fibo[pos-1]);


}



int main()
{
int num;
fib();
    while(scanf("%d",&num)!=EOF)
    {
        printf("The Fibonacci number for %d is ",num);
        puts(fibo[num]);
    }




    return 0;
}
