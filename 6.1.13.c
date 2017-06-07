//6.1.13
#include <stdio.h>
#include <conio.h>
void sort ( int a[10] );
void main()
    {
        int i,a[10];
        printf("Enter 10 numbers :\n");
        for ( i = 0 ; i < 10 ; i++ )
            {
                scanf("%d",&a[i]);
            }
        sort ( a );
    }
void sort ( int a[10] )
    {
        int i,j;
        for ( i = 0 ; i < 10 ; i++ )
            {
                for ( j = 0 ; j < 9 ; j++)
                    {
                        if ( a[j] > a[j+1] )
                            {
                                int temp = a[j];
                                a[j] = a[j+1];
                                a[j+1] = temp;
                            }
                    }
            }
        printf("The numbers in ascending order are :\n");
        for ( i = 0 ; i < 10 ; i++ )
            {
                printf("%d\n",a[i] );
            }
    }
