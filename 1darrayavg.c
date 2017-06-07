#include <stdio.h>
#include <conio.h>
void main()
    {
        int n,a[100],i,sum=0;
        float avg = 0.0 ;
        printf("Enter no. of elements :\n");
        scanf("%d",&n);
        printf("Enter %d elements :\n",n);
        for ( i = 0 ; i <= n - 1 ; i++ )
            {
                scanf("%d",&a[i]);
            }
        printf("The %d elements are :\n",n);
        for ( i = 0 ; i <= n - 1 ; i++ )
            {
                printf("%d\n",a[i]);
            }
        for ( i = 0 ; i <= n - 1 ; i++ )
            {
                sum = sum + a[i];
            }
            avg = sum / n ;
        printf("Sum : %d\n",sum);
        printf("Average : %f\n",avg);
        getch();
    }
