#include <stdio.h>
#include <conio.h>
void decide ( int a[100] ,int n ,int i );
void main()
    {
        int a[100], n , i ;
        printf("Enter number of elements :\n");
        scanf("%d",&n);

        printf("Enter elements :\n");
        for ( i = 0 ; i < n ; i++ )
        {
            scanf("%d",&a[i]);
        }
        decide ( a,n,i);
        getch();
    }
void decide ( int a[100] , int n , int i )
{


        int max = a[0];
        int min = a[0];
        for ( i = 0 ; i < n ; i++ )
        {
            if ( a[i] > max )
                max = a[i];
        }
        for ( i = 0 ; i < n ; i++ )
        {
            if ( a[i] < min )
                min = a[i];
        }
        printf("Largest element : %d\n",max);
        printf("Smallest element : %d\n",min);
        getch();

    }
