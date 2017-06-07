//3.2.12
#include <stdio.h>
#include <conio.h>
void main()
    {
        int i,n;
        float sum = 0.0,term;
        printf("Enter the number of terms :\n");
        scanf("%d",&n);
        term = 1 ;
        sum = 1.0;
        for ( i = 1 ; i <= n - 1 ; i++ )
            {
                term = term / ( i + 1);
                sum = sum + term;
            }
        printf("The sum of the series is : %f\n",sum);
        getch();
    }
