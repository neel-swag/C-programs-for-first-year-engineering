//6.1.2
#include <stdio.h>
#include <conio.h>
void main()
    {
        int a[100],n,i;
        float sum=0.0,avg;
        printf("Enter the number of numbers :\n");
        scanf("%d",&n);
        printf("Enter the numbers :\n");
        for ( i = 0 ; i < n ; i++ )
            {
                scanf("%d",&a[i]);
                sum = sum + a[i];
            }
        avg = sum / n ;
        printf("The average of the numbers is : %f\n",avg);
        getch();
    }
