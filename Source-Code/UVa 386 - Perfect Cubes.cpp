#include<stdio.h>


int main()
{
    int i,j,k,a,b,c,d,x,y,off;

    for(a=2; a<=200; a++)
    {

        for(i=2; i<a; i++)
        {

            for(j=i; j<a; j++)
            {
                for(k=j; k<a; k++)
                {
                    x=a*a*a;
                    y=i*i*i+j*j*j+k*k*k;

                    if(x==y)
                    {
                        printf("Cube = %d, Triple = (%d,%d,%d)\n",a,i,j,k);
                        break;

                    }
                }

            }

        }


    }



    return 0;
}

