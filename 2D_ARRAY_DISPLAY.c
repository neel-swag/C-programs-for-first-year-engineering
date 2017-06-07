#include <stdio.h>
#include <conio.h>
void main()
    {
        int a[100][100],m,n,i,j;
        printf("Enter number of rows and columns :\n");
        scanf("%d%d",&m,&n);
        printf("Enter the elements:\n");
        for ( i = 0 ; i <= m - 1 ; i++ )
        {
            for ( j = 0 ; j <= n - 1 ; j++ )
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("The matrix is :\n");
        for ( i = 0 ; i <= m - 1 ; i++ )
        {
            for ( j = 0 ; j <= n - 1 ; j++ )
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        getch();



    }
