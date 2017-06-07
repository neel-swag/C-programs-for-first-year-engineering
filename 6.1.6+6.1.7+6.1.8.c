//6.1.6+6.1.7+6.1.8
#include <stdio.h>
#include <conio.h>
void finder ( int a[100] , int n );
void main()
    {
        int a[100],n,i;
        printf("Enter the number of numbers :\n");
        scanf("%d",&n);
        printf("Enter the numbers :\n");
        for ( i = 0 ; i < n ; i++ )
            {
                scanf("%d",&a[i]);
            }
        finder ( a , n );
        getch();
    }
void finder ( int a[100] , int n )
    {
        int i;
        int max = a[0];
        int min = a[0];
        for ( i = 0 ; i < n ; i++ )
            {
                if ( a[i] > max )
                    {
                        max = a[i] ;
                    }
                if ( a[i] < min )
                    {
                        min = a[i] ;
                    }
            }
        printf("Largest element : %d\n",max);
        printf("Smallest element : %d\n",min);
    }
