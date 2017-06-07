#include <stdio.h>
#include <conio.h>
void sumavg ( int a[10] );
void main()
    {
        int a[10],i;
        printf("Enter 10 numbers:\n");
        for ( i = 0 ; i < 10 ; i++ )
            {
                scanf("%d",&a[i]);
            }
        sumavg (a);
        getch();
    }
void sumavg ( int a[10] )
    {
        int sum=0,i;
        float avg = 0.0;
        for ( i = 0 ; i < 10 ; i++ )
            {
                sum = sum + a[i];
            }
        avg = (float)sum / 10.0;
        printf("Sum of numbers: %d\n",sum);
        printf("Average of numbers: %f\n",avg);
    }
