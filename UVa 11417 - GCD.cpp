#include<stdio.h>



int gcd(int i, int j)
{
    int c;

    while(i!=0)
            {
                  c=j%i;
                  j=i;
                  i=c;
            }

    return j;
}



int main()
{
    int i,N,j,G=0;

    while(1)
    {
        scanf("%d",&N);
        if(N==0)
        break;


    for(i=1;i<N;i++)
        for(j=i+1;j<=N;j++)
              G+=gcd(i,j);



    printf("%d\n",G);
    G=0;
    }



    return 0;
}
