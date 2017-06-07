//6.1.11+6.1.12
#include <stdio.h>
#include <conio.h>
void searcher ( int a[100] , int n , int i );
void main ()
    {
        int a[100],n,i;
        printf("Enter the number of elements :\n");
        scanf("%d",&n);
        printf("Enter the elements :\n");
        for ( i = 0 ; i < n ; i++ )
            {
                scanf("%d",&a[i]);
            }
        searcher ( a, n , i );
        getch();
    }
void searcher ( int a[100], int n , int i)
    {
        int ele,flag = 0;
        printf("Enter the search term :\n");
        scanf("%d",&ele);
        for ( i = 0 ; i < n ; i++ )
            {
                if ( ele == a[i] )
                    {
                        flag = 1 ;
                        printf("%d found at index %d.\n",ele,i);
                    }
            }
        if ( flag == 0 )
            {
                printf("  Element not found.\n");
            }
    }
