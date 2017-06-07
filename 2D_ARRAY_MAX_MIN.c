#include <stdio.h>
#include <conio.h>
void extreme ( int a[10][10] , int m , int n );
void main()
{
    int i,j,m,n,a[10][10];
    printf("Enter no. of rows :\n");
    scanf("%d",&m);
    printf("Enter no. of columns :\n");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for ( i = 0 ; i < m ; i++ )
        {
            for ( j = 0 ; j < n ; j++ )
                {
                    scanf("%d",&a[i][j]);
                }
        }
    extreme ( a ,m,n );
    getch();
}
void extreme ( int a[10][10] , int m , int n )
    {
        int i,j,max = a[0][0],min = a[0][0];
        printf("The given matrix is :\n");
        for ( i = 0 ; i < m ; i++ )
            {
                for ( j = 0 ; j < n ; j++ )
                    {
                        printf("%d ",a[i][j]);
                    }
                printf("\n");
            }
        for ( i = 0 ; i < m ; i++ )
            {
                for ( j = 0 ; j < n ; j++ )
                    {
                        if ( max < a[i][j] )
                            max = a[i][j];
                        if ( min > a[i][j] )
                            min = a[i][j];
                    }
            }
        printf("Largest number : %d\n",max);
        printf("Smallest number : %d\n",min);
    }
