//6.1.9+6.1.10
#include <stdio.h>
#include <conio.h>
void rev ( int a[10] , int i );
void main()
    {
        int a[10],i;
        printf("Enter 10 numbers :\n");
        for ( i = 0 ; i < 10 ; i++ )
            {
                scanf("%d",&a[i]);
            }
        rev ( a , i );
    }
void rev ( int a[10] , int i )
    {
        for ( i = 0 ; i < (10-1)/2 ; i++ )
            {

                int temp = a[i];
                a[i] = a[ 10 - i - 1];
                a[10 - i - 1] = temp;
            }
        printf("Reversed array :\n");
        for ( i = 0 ; i < 10 ; i++ )
            {
                printf("%d\n",a[i]);
            }

    }
