//6.1.4
#include <stdio.h>
#include <conio.h>
void main()
    {
        int a[100],i,n,sum1=0,sum2=0,sum=0;
        printf("Enter the number of numbers :\n");
        scanf("%d",&n);
        printf("Enter the numbers :\n");
        for ( i = 0 ; i < n ; i++ )
            {
                scanf("%d",&a[i]);
            }
        for ( i = 0 ; i < n ; i++ )
            {
                sum1 = sum1 + a[i]*a[i];
            }
        for ( i = 0 ; i < n ; i++ )
            {
                sum2 = sum2 + a[i];
            }
        sum = sum1 - sum2*sum2;
        printf("The sum of the series is : %d\n",sum);
        getch();

    }
