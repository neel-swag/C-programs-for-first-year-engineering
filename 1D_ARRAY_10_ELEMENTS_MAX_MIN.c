#include <stdio.h>
#include <conio.h>
void main()
    {
        int a[10],i,max,min;
        printf("Enter 10 elements :\n");
        for ( i = 0 ; i <= 9 ; i++ )
            {
                scanf("%d",&a[i]);
            }
        max = a[0];
        min = a[0];
        for ( i = 0 ; i <= 9 ; i++ )
            {
                if ( a[i] > max )
                    max = a[i] ;
            }
        for ( i = 0 ; i <= 9 ; i++ )
            {
                if ( a[i] < max )
                    min = a[i] ;
            }
        printf("Largest element : %d\n",max);
        printf("Smallest element : %d\n",min);
        getch();

    }
