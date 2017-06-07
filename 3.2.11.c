//3.2.11
#include <stdio.h>
#include <conio.h>
void main()
    {
        int n,i;
        float sum =0.0;
        printf("Enter the number of terms :\n");
        scanf("%d",&n);
        for ( i = 1 ; i <= n ; i++ )
            {
                sum = sum + (1.0/i);
            }
        printf("Sum of the series is : %f \n",sum);
        getch();
    }
