//3.2.13
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
    {
        int i,n;
        float x ,sum,term;
        printf("Enter the value of angle in radians :\n");
        scanf("%f",&x);
        sum = x ;
        term = x ;
        i = 1 ;
        while ( fabs(term) >= 1e-6 )
            {
                term = - term * x * x / ( (i+1)*(i+2) );
                sum = sum + term ;
                i = i + 2 ;
            }
        printf("The sine of the given angle is : %f \n",sum);
        getch();
    }
