#include<stdio.h>
#include<string.h>


int main()
{
    int i,j,k,n,a,b,temp,opr,x,y,tCase;
    int in[500][500],res[500][500];
    char str[20],istr[500];

    scanf("%d",&tCase);

    for(int w=1; w<=tCase; w++)
    {
        scanf("%d",&n);
    //getchar();

    int add=0;


    for(i=1; i<=n; i++)
    {
        scanf("%s",istr);
        for(j=1,add=0; j<=n; j++,add++)
        in[i][j]=istr[add]-'0';
    }

    scanf("%d",&opr);

    for(k=1; k<=opr; k++)
    {
        scanf("%s",str);

        if(strcmp(str,"row")==0)
        {
            scanf("%d %d",&a,&b);

            for(x=1; x<=n; x++)
            {
                temp=in[a][x];
                in[a][x]=in[b][x];
                in[b][x]=temp;
            }

        }

        else if(strcmp(str,"col")==0)
        {
            scanf("%d %d",&a,&b);

            for(x=1; x<=n; x++)
            {
                temp=in[x][a];
                in[x][a]=in[x][b];
                in[x][b]=temp;
            }

        }

        else if(strcmp(str,"inc")==0)
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    in[i][j]++;
                if(in[i][j]>9)
                in[i][j]=0;
                }

            }
        }

        else if(strcmp(str,"dec")==0)
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    in[i][j]--;
                if(in[i][j]<0)
                in[i][j]=9;
                }

            }
        }

        else if(strcmp(str,"transpose")==0)
        {
            for(j=1; j<=n; j++)
            {
                for(i=1; i<=n; i++)
                {
                    res[j][i]=in[i][j];
                }
            }

            for(i=1; i<=n; i++)
                {
                    for(j=1; j<=n; j++)
                    {
                        in[i][j]=res[i][j];
                    }

                }
        }

    }

    printf("Case #%d\n",w);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        printf("%d",in[i][j]);
        puts("");
    }
    puts("");

    }




    return 0;
}
