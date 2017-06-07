#include <stdio.h>
#include <conio.h>
void main()
    {
        int a[10][10],i,j,m,n,max=a[0][0],min=a[0][0],sum=0;
        printf("Enter the number of rows :\n");
        scanf("%d",&m);
        printf("Enter the number of columns :\n");
        scanf("%d",&n);
        printf("Enter the elements :\n");
        for ( i = 0 ; i < m ; i++ )
            {
                for ( j = 0 ; j < n ; j++ )
                    {
                        scanf("%d", &a[i][j] );
                    }
            }
        printf("The matrix is :\n");
        for ( i = 0 ; i < m ; i++ )
            {
                for ( j = 0 ; j < n ; j++ )
                    {
                        printf("%d ",a[i][j]);
                        sum = sum + a[i][j];
                        if ( a[i][j] > max )
                            {
                                max = a[i][j] ;
                            }
                        if ( a[i][j] < min )
                            {
                                min = a[i][j];
                            }
                    }
                printf("\n");
            }
        printf("Sum of elements : %d\n",sum);
        printf("Largest element : %d\n",max);
        printf("Smallest element : %d\n",min);
        getch();

    }
