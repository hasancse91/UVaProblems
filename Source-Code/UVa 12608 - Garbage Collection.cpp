#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int num, dist,load,a,b,test,maxw,last_pos,i;

    cin>>test;

    while(test--)
    {
    	load=0;
    	dist=0;
    	last_pos=0;
    	cin>>maxw>>num;

    	for(i=1;i<=num;i++)
    	{
    		cin>>a>>b;

    		dist+=(a-last_pos); //distance from previous point to current point
    		if(load+b>maxw)   //overweight, move the gurbage to dump and come again
    		{
    			load=b;
    			dist+=(2*a);
    		}
    		else		//collect the grubage
    		{
    			load+=b;
    		}

    		//after collecting from current position, before move, check whether it is full or not
    		//if full, then move it to dump and then move forward to next position
    		if(load==maxw && i<num) //not the last position
    		{
    			dist+=(2*a);
    			load=0;
    		}
    		last_pos=a;
    	}
    	dist+=(last_pos); //for the last position

    	cout<<dist<<endl;
    }



    return 0;
}
