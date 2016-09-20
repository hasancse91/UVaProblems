#include<bits/stdc++.h>
#define input(n) scanf("%d",&n);
#define loop(start, end) for(int i =start; i<=end; i++)

using namespace std;

int main()
{
    int n,i,j,sum,row_counter,column_counter,bit_row,bit_column;

    while(scanf("%d",&n) && n)
    {
        row_counter =0;
        column_counter =0;
        bit_row =0;
        bit_column =0;

        int arr[105][105];

        for(i=0; i<n; i++)
        {
            sum = 0;
            for(j=0; j<n; j++)
            {
                input(arr[i][j]);
                sum += arr[i][j];
            }
            arr[i][j] = sum;

            if(sum&1)
            {
                row_counter++;
                bit_row = i+1;
            }

        }

        if(row_counter<2)
        {
            for(i=0; i<n; i++)
            {
                sum = 0;
                for(j=0; j<n; j++)
                {
                    sum += arr[j][i];
                }
                arr[n][i] = sum;

                if(sum&1)
                {
                    column_counter++;
                    bit_column = i+1;
                }

            }
        }

        if(row_counter%2==0 && column_counter%2==0 && !bit_row && !bit_column)
        {
            puts("OK");
            /*cout<<"R_C "<<row_counter%2<<endl;
            cout<<"C_C "<<column_counter%2<<endl;
            cout<<"Bit_Row "<<bit_row <<endl;
            cout<<"Bit_Column "<<bit_column<<endl;
            */
        }
        else if(row_counter==1 && column_counter==1)
            printf("Change bit (%d,%d)\n",bit_row, bit_column);
        else
        {
            puts("Corrupt");
/*
            cout<<"R_C "<<row_counter%2<<endl;
            cout<<"C_C "<<column_counter%2<<endl;
            cout<<"Bit_Row "<<bit_row <<endl;
            cout<<"Bit_Column "<<bit_column<<endl;
            */
        }


    }


    return 0;
}
