#include<stdio.h>

int main()
{
    int i,j,k,ar=0,br=0,fa=0,fb=0;
    float res;
    char a[50],b[50];


    while((gets(a))!=0)
    {

            gets(b);


            ar=0,br=0,fa=0,fb=0;

            for(i=0; a[i]; i++)
            {
                if(a[i]>='a' && a[i]<='z')
                ar+=a[i]-96;
                else if(a[i]>='A' && a[i]<='Z')
                ar+=a[i]-64;
            }

            for(j=0; b[j]; j++)
            {
                if(b[j]>='a' && b[j]<='z')
                br+=b[j]-96;
                else if(b[j]>='A' && b[j]<='Z')
                br+=b[j]-64;

            }


            int tmp=0;
            while(ar!=0)
            {
                tmp=ar%10;
                fa+=tmp;
                ar/=10;
            }

            if(fa>9)
            {
                ar=0;
                tmp=0;
                while(fa!=0)
                {
                    tmp=fa%10;
                    ar+=tmp;
                    fa/=10;
                }
            }
            else
            ar=fa;


            tmp=0;
            while(br!=0)
            {
                tmp=br%10;
                fb+=tmp;
                br/=10;
            }

            if(fb>9)
            {
                br=0;
                tmp=0;
                while(fb!=0)
                {
                    tmp=fb%10;
                    br+=tmp;
                    fb/=10;
                }
            }
            else
            br=fb;

            printf("%d %d<<<--\n",ar,br);

            if(ar>br)
            res=(br/(float)ar)*100;
            else
            res=(ar/(float)br)*100;

            printf("%.2f %%\n",res);

    }


    return 0;
}
