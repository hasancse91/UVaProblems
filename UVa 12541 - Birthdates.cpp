#include<stdio.h>

struct date
{
    char name[20];
    int day,month,year;
};

int main()
{
    int i,j,k,tCase,mday,mmonth,myear,mxday,mxmonth,mxyear;
    date info[120];


    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%s",info[i].name);
        scanf("%d %d %d",&info[i].day,&info[i].month,&info[i].year);
    }

    /*for(i=1; i<=tCase; i++)
    printf("%s %d %d %d\n",info[i].name,info[i].day,info[i].month,info[i].year);*/


    mday=info[1].day,mmonth=info[1].month,myear=info[1].year;
    mxday=info[1].day,mxmonth=info[1].month,mxyear=info[1].year

    for(i=1; i<=tCase; i++)
    {
        if(myear>info[i].year)
        myear=info[i].year;

        if(mxyear<info[i].year)
        mxyear=info[i].year;


        if(myear>info[i].year)
        myear=info[i].year;

        if(mxyear<info[i].year)
        mxyear=info[i].year;




    }


    return 0;
}
