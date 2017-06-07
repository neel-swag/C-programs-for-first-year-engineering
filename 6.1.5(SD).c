//6.1.5
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
    {
        int a[100],n,i;
        float sum=0,avg;
        printf("Enter the number of numbers you want :\n");
        scanf("%d",&n);
        printf("Enter the numbers :\n");
        for ( i = 0 ; i < n ; i++ )
            {
                scanf("%d",&a[i]);
            }
        for ( i = 0 ; i < n ; i++ )
            {
                sum = sum + a[i];
            }
        avg = sum / (float)n;
        float total = 0 ;
        for ( i = 0 ; i < n ; i++ )
            {
                total = total + (a[i] - avg )*(a[i] - avg );
            }
        float sd = sqrt(total/(float)(n));
        printf("The value of standard deviation for given data is : %f \n",sd);
        getch();

    }
